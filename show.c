#include"show.h"
#include<stdlib.h>
#include<stdio.h>
/**************************
 *��ʾ����ѧ������
 **************************/
void Show(Student *Data_head)
{
    Student *Data_tmp = Data_head->next;

    printf("ѧ��\t\t����\t����\t��ѧ\t����\t�ܷ�\t����\n");
    while(Data_tmp != NULL)
    {

    PRINT(Data_tmp);
    Data_tmp = Data_tmp ->next;
    }
    printf("����������� .");
    getch();
}
/**********************
 *��ӡ��һ����������
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
/*��β�Ϳ�ʼ��ʾ*/
void ShowN(Student *Data_rear)
{
    Student *Data_tmp = Data_rear;

    printf("ѧ��\t\t����\t����\t��ѧ\t����\t�ܷ�\t����\n");
    while(Data_tmp->prior != NULL)
    {
    PRINT(Data_tmp);
    Data_tmp = Data_tmp ->prior;
    }
    printf("����������� .");
    getch();
}
