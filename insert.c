#include"insert.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/************************
 *输入学生数据
 *
 ************************/
int InsertRun(Student *Data_head)
{

    Student *Stu_Data = (Student *)malloc(sizeof(Student));
        if(Stu_Data ==NULL) return 0;

    printf("请输入学生学号，姓名，语文，数学，英语成绩，信息。\n");
    printf("学号:");
    scanf("%s",&Stu_Data->S_num); getchar();
    printf("姓名:");
    scanf("%s",&Stu_Data->S_name); getchar();
    printf("语文成绩:");
    scanf("%d",&Stu_Data->Chinese); getchar();
    printf("数学成绩:");
    scanf("%d",&Stu_Data->Math); getchar();
    printf("英语成绩:");
    scanf("%d",&Stu_Data->English); getchar();
    Stu_Data->Sum = Stu_Data->Chinese +Stu_Data->Math +Stu_Data->English;
    Stu_Data->Rank = 0;
    Stu_Data->next = NULL;
    Stu_Data->prior = NULL;
if(!Insert_Stu(Data_head,Stu_Data))
{
        free(Stu_Data);
        printf("输入的学号已存在！\n");

}
       printf("按任意键继续。");
        getch();
}

/**************************
 *插入一个结点在表尾
 *成功返回1
 *失败返回0
 **************************/
int Insert_Stu(Student *Data_head,Student *Stu_Data)
{
    Student *D_tmp = Data_head;
    /*结到表尾*/
    while(D_tmp->next != NULL)
    {
        D_tmp = D_tmp->next;
        if(strcmp(D_tmp->S_num,Stu_Data->S_num) == 0)
            //如果有相同学号输入的数据就无效
        {
            return 0;
        }
    }
        D_tmp->next = Stu_Data;
        Stu_Data->prior = D_tmp;
            return 1;
}
