#include"delect.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**********************
 *����ɾ������
 **********************/
void DelectRun(Student *Data_head)
{
    char s_num[9]; /*���˴�ʮ��Σ�ղ��ʱҪ������*********/
    printf("������Ҫɾ����ѧ�ţ�");
    scanf("%s",s_num); getchar();
  if(delect(Data_head,s_num))
    printf("�ɹ���\n");
  else
    printf("û�����ҵ�Ҫɾ����ѧ�ţ�\n");
  printf("�������������");
    getch();
}
/******************************
 *ɾ��һ��ѧ�����
 *s_num[] ѧ��ѧ��
 *�ɹ�����1 ʧ�ܷ���0
 ******************************/
int delect(Student *Data_head,char s_num[])
{
    Student *Data_tmp = NULL;
    Student *data_tmp2 = Data_head;
    Student *Data_stu = Data_head->next;

    while(Data_stu != NULL)
    {
        if(!strcmp(Data_stu->S_num,s_num))
           {
                Data_tmp = Data_stu;
                data_tmp2->next =Data_stu->next;
                break;
           }
        data_tmp2 = Data_stu;
        Data_stu =  Data_stu->next;
    }
    if(Data_tmp != NULL)
    {
        free(Data_tmp);
        return 1;
    }
    else
    {
        return 0;
    }
}
