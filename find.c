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
                printf("û�����ѡ�\n");
                printf("�������������");

        }
                      getch();
     }
     return 1;
}

int FindforNum(Student *Data_head)
{
    Student *Std_tmp = Data_head->next;
    char s_num[9]; /*���˴�ʮ��Σ�ղ��ʱҪ������*********/
    printf("����ѧ�ţ�");
    scanf("%s",s_num); getchar();
    printf("ѧ��\t\t����\t����\t��ѧ\t����\t�ܷ�\t����\n");
    while(Std_tmp != NULL)
    {
        if(strcmp(Std_tmp->S_num,s_num) == 0)
            PRINT(Std_tmp);
        Std_tmp = Std_tmp ->next;
    }
                printf("�������������");

return 1;
}

int FindforName(Student *Data_head)
{
     Student *Std_tmp = Data_head->next;
    char s_name[11]; /*���˴�ʮ��Σ�ղ��ʱҪ������*********/
    printf("����������");
    scanf("%s",s_name); getchar();
    printf("ѧ��\t\t����\t����\t��ѧ\t����\t�ܷ�\t����\n");
    while(Std_tmp != NULL)
    {
        if(strcmp(Std_tmp->S_name,s_name) == 0)
            PRINT(Std_tmp);
        Std_tmp = Std_tmp ->next;
    }
      printf("�������������");

return 1;
}

int FindforRank(Student *Data_head)
{
    Student *Std_tmp = Data_head->next;
    int s_rank;
    printf("�������Σ�");
    scanf("%d",&s_rank); getchar();
    printf("ѧ��\t\t����\t����\t��ѧ\t����\t�ܷ�\t����\n");
    while(Std_tmp != NULL)
    {
        if(Std_tmp->Rank == s_rank)
            PRINT(Std_tmp);
        Std_tmp = Std_tmp ->next;
    }
      printf("�������������");

return 1;
}
