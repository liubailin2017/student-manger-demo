#include"revise.h"
#include<stdio.h>
#include<string.h>
#include"show.h"
int ReStdDat(Student *Dat1,Student *Dat2)//����2�滻����1
{
    Dat1->Chinese = Dat2->Chinese;
    Dat1->English =Dat2->English;
    Dat1->Math =Dat2->Math;
    Dat1->Sum = Dat2->Sum;
    Dat1->Rank = Dat2->Rank;
return 1;
}
Student Input() //�����û���������
{
    Student Stu_Data;
    printf("������ѧ�����ģ���ѧ��Ӣ��ɼ�����Ϣ��\n");
    printf("���ĳɼ�:");
    scanf("%d",&Stu_Data.Chinese); getchar();
    printf("��ѧ�ɼ�:");
    scanf("%d",&Stu_Data.Math); getchar();
    printf("Ӣ��ɼ�:");
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
    char s_num[9]; /*���˴�ʮ��Σ�ղ��ʱҪ������*********/
    printf("������Ҫ�޸ĵ�ѧ�ţ�");
    scanf("%s",s_num); getchar();
while(Std_dat != NULL)
    {
        if (strcmp(Std_dat->S_num,s_num) == 0)
        {
        printf("ѧ��\t\t����\t����\t��ѧ\t����\t�ܷ�\t����\n");
        PRINT(Std_dat);
        tmp = Input();
        ReStdDat(Std_dat,&tmp);
        return 1;
        }
        Std_dat = Std_dat->next;
    }
    printf("û���ҵ�Ҫ�޸ĵ�ѧ��!\n");
    printf("�������������");
    getch();
return 0;
}
