#include "count.h"
#include"show.h"
#include<stdlib.h>
#include<stdio.h>
/*返回数据个数*/
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
/*这个模块较复杂，效率也较低，我实在想不出怎么简单一点
 *用传统排序方法好像不好弄因为不能变顺序。而传统方法都要
 *改变顺序，只有暂时这样做，以后有好的算法再做修改。*/
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
        Ranktmp[p++] = Stu_Rank;         //p代表有P个数据
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
                i--;        /*再判断一次i*/
                last--;   /*最后一名减一*/
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
