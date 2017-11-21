#include"revise.h"
#include<stdio.h>
#include<string.h>
#include"show.h"
int ReStdDat(Student *Dat1,Student *Dat2)//数据2替换数据1
{
    Dat1->Chinese = Dat2->Chinese;
    Dat1->English =Dat2->English;
    Dat1->Math =Dat2->Math;
    Dat1->Sum = Dat2->Sum;
    Dat1->Rank = Dat2->Rank;
return 1;
}
Student Input() //返回用户输入数据
{
    Student Stu_Data;
    printf("请输入学生语文，数学，英语成绩，信息。\n");
    printf("语文成绩:");
    scanf("%d",&Stu_Data.Chinese); getchar();
    printf("数学成绩:");
    scanf("%d",&Stu_Data.Math); getchar();
    printf("英语成绩:");
    scanf("%d",&Stu_Data.English); getchar();
    Stu_Data.Sum = Stu_Data.Chinese +Stu_Data.Math +Stu_Data.English;
    Stu_Data.Rank = 0;
    Stu_Data.next = NULL;
    Stu_Data.prior = NULL;
    return Stu_Data;
}
int ReStdDatRun(Student *Data_head)
{
    Student tmp;
    Student *Std_dat = Data_head->next;
    char s_num[9]; /*！此处十分危险查错时要多留意*********/
    printf("请输入要修改的学号：");
    scanf("%s",s_num); getchar();
while(Std_dat != NULL)
    {
        if (strcmp(Std_dat->S_num,s_num) == 0)
        {
        printf("学号\t\t姓名\t语言\t数学\t外语\t总分\t名次\n");
        PRINT(Std_dat);
        tmp = Input();
        ReStdDat(Std_dat,&tmp);
        return 1;
        }
        Std_dat = Std_dat->next;
    }
    printf("没有找到要修改的学生!\n");
    printf("按任意键继续。");
    getch();
return 0;
}
