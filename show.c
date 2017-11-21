#include"show.h"
#include<stdlib.h>
#include<stdio.h>
/**************************
 *显示所有学生数据
 **************************/
void Show(Student *Data_head)
{
    Student *Data_tmp = Data_head->next;

    printf("学号\t\t姓名\t语言\t数学\t外语\t总分\t名次\n");
    while(Data_tmp != NULL)
    {

    PRINT(Data_tmp);
    Data_tmp = Data_tmp ->next;
    }
    printf("按任意键继续 .");
    getch();
}
/**********************
 *打印出一个结点的数据
 *
 *
 **********************/
void PRINT(Student *data)
{
      printf("%s\t\t%s\t%d\t%d\t%d\t%d\t%d\n",
               data->S_num,
               data->S_name,
               data->Chinese,
               data->Math,
               data->English,
               data->Sum,
               data->Rank);
}
/*从尾巴开始显示*/
void ShowN(Student *Data_rear)
{
    Student *Data_tmp = Data_rear;

    printf("学号\t\t姓名\t语言\t数学\t外语\t总分\t名次\n");
    while(Data_tmp->prior != NULL)
    {
    PRINT(Data_tmp);
    Data_tmp = Data_tmp ->prior;
    }
    printf("按任意键继续 .");
    getch();
}
