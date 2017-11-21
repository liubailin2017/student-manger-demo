#include "quit.h"
#include "stdio.h"
#include <stdlib.h>
/********************
 *銷毀所有结点
 ********************/
int Destroy_All(Student *Data_head)
{
 Student *Data_tmp = Data_head->next;
 Student *Data_tmp2 = Data_head->next;
 while(Data_tmp != NULL)
 {
     Data_tmp2 = Data_tmp;
     Data_tmp = Data_tmp ->next;
     free(Data_tmp2);
 }
    return 1;
}
/*******************
 *存进外部存储器
 *******************/
int Sava_All(Student *Data_head)
{
    Student *Data_tmp = Data_head->next;
    FILE *fsava = fopen("student.dat","wb");
    while(Data_tmp != NULL)
       {
            fwrite(Data_tmp,sizeof(Student)-2*sizeof(Student *),1,fsava);
            Data_tmp = Data_tmp->next;
       }
    fclose(fsava);
}
