#include "count.h"
#include"show.h"
#include<stdlib.h>
#include<stdio.h>
/*�������ݸ���*/
int Datlen(Student *Data_head)
{
    int len = 0;
    Student *tmp= Data_head->next;
    while(tmp != NULL)
    {
        len++;
        tmp = tmp->next;
    }
    return len;
}
/*���ģ��ϸ��ӣ�Ч��Ҳ�ϵͣ���ʵ���벻����ô��һ��
 *�ô�ͳ���򷽷����񲻺�Ū��Ϊ���ܱ�˳�򡣶���ͳ������Ҫ
 *�ı�˳��ֻ����ʱ���������Ժ��кõ��㷨�����޸ġ�*/
int CountRun(Student *Data_head)
{
    Student *Std_dat,*Std_tmp;
    Std_dat = Data_head->next;
    int p = 0;
    int len = Datlen(Data_head);
    int *Ranktmp = (int *)malloc( len * sizeof(int));
    int last = len;
    while(Std_dat != NULL)
    {
        int Stu_Rank = 1;
        Std_tmp = Data_head->next;
        while(Std_tmp != NULL)
        {
            if(Std_tmp ->Sum > Std_dat->Sum)
            {
                Stu_Rank++;
            }
            Std_tmp = Std_tmp ->next;
        }
        Ranktmp[p++] = Stu_Rank;         //p������P������
        Std_dat = Std_dat->next;
    }

    int i;
    int is = 0;
    for(i = 1; i < last; i++)
    {
        is = 0;

        for(p = 0; p < len; p++)
            if(Ranktmp[p] == i) is = 1;

        if(is == 0)
            {
                for(p = 0; p < len; p++)
                    if(Ranktmp[p] > i)
                    {
                        Ranktmp[p]--;
                    }
                i--;        /*���ж�һ��i*/
                last--;   /*���һ����һ*/
            }
    }

    p=0;
    Std_dat =  Data_head->next;
        while(Std_dat != NULL)
        {
        Std_dat->Rank = Ranktmp[p++];
            Std_dat = Std_dat->next;
        }
    free(Ranktmp);
Show(Data_head);
}
