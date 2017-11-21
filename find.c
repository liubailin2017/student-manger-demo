#include"find.h"
#include<stdio.h>
#include<string.h>
#include"desktop.h"
#include"show.h"
int FindRun(Student *Data_head)
{
    int choose;
    int Re = 0;
    while(!Re)
    {
        choose = FindDesktop();
        switch(choose)
        {
            case F_NUM :
                FindforNum(Data_head);
                break;
            case F_NAME :
                FindforName(Data_head);
                break;
            case F_RANK :
                FindforRank(Data_head);
                break;
            case F_RETURN :
		return 1;
/*
                Re = 1;
 	        break;
*/
	     default :
                printf("没有这个选项！\n");
                printf("按任意键继续。");

        }
                      getch();
     }
     return 1;
}

int FindforNum(Student *Data_head)
{
    Student *Std_tmp = Data_head->next;
    char s_num[9]; /*！此处十分危险查错时要多留意*********/
    printf("输入学号：");
    scanf("%s",s_num); getchar();
    printf("学号\t\t姓名\t语言\t数学\t外语\t总分\t名次\n");
    while(Std_tmp != NULL)
    {
        if(strcmp(Std_tmp->S_num,s_num) == 0)
            PRINT(Std_tmp);
        Std_tmp = Std_tmp ->next;
    }
                printf("按任意键继续。");

return 1;
}

int FindforName(Student *Data_head)
{
     Student *Std_tmp = Data_head->next;
    char s_name[11]; /*！此处十分危险查错时要多留意*********/
    printf("输入姓名：");
    scanf("%s",s_name); getchar();
    printf("学号\t\t姓名\t语言\t数学\t外语\t总分\t名次\n");
    while(Std_tmp != NULL)
    {
        if(strcmp(Std_tmp->S_name,s_name) == 0)
            PRINT(Std_tmp);
        Std_tmp = Std_tmp ->next;
    }
      printf("按任意键继续。");

return 1;
}

int FindforRank(Student *Data_head)
{
    Student *Std_tmp = Data_head->next;
    int s_rank;
    printf("输入名次：");
    scanf("%d",&s_rank); getchar();
    printf("学号\t\t姓名\t语言\t数学\t外语\t总分\t名次\n");
    while(Std_tmp != NULL)
    {
        if(Std_tmp->Rank == s_rank)
            PRINT(Std_tmp);
        Std_tmp = Std_tmp ->next;
    }
      printf("按任意键继续。");

return 1;
}
