#include"insert.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/************************
 *����ѧ������
 *
 ************************/
int InsertRun(Student *Data_head)
{

    Student *Stu_Data = (Student *)malloc(sizeof(Student));
        if(Stu_Data ==NULL) return 0;

    printf("������ѧ��ѧ�ţ����������ģ���ѧ��Ӣ��ɼ�����Ϣ��\n");
    printf("ѧ��:");
    scanf("%s",&Stu_Data->S_num); getchar();
    printf("����:");
    scanf("%s",&Stu_Data->S_name); getchar();
    printf("���ĳɼ�:");
    scanf("%d",&Stu_Data->Chinese); getchar();
    printf("��ѧ�ɼ�:");
    scanf("%d",&Stu_Data->Math); getchar();
    printf("Ӣ��ɼ�:");
    scanf("%d",&Stu_Data->English); getchar();
    Stu_Data->Sum = Stu_Data->Chinese +Stu_Data->Math +Stu_Data->English;
    Stu_Data->Rank = 0;
    Stu_Data->next = NULL;
    Stu_Data->prior = NULL;
if(!Insert_Stu(Data_head,Stu_Data))
{
        free(Stu_Data);
        printf("�����ѧ���Ѵ��ڣ�\n");

}
       printf("�������������");
        getch();
}

/**************************
 *����һ������ڱ�β
 *�ɹ�����1
 *ʧ�ܷ���0
 **************************/
int Insert_Stu(Student *Data_head,Student *Stu_Data)
{
    Student *D_tmp = Data_head;
    /*�ᵽ��β*/
    while(D_tmp->next != NULL)
    {
        D_tmp = D_tmp->next;
        if(strcmp(D_tmp->S_num,Stu_Data->S_num) == 0)
            //�������ͬѧ����������ݾ���Ч
        {
            return 0;
        }
    }
        D_tmp->next = Stu_Data;
        Stu_Data->prior = D_tmp;
            return 1;
}
