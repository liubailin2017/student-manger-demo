#include"delect.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**********************
 *进行删除操作
 **********************/
void DelectRun(Student *Data_head)
{
    char s_num[9]; /*！此处十分危险查错时要多留意*********/
    printf("请输入要删除的学号：");
    scanf("%s",s_num); getchar();
  if(delect(Data_head,s_num))
    printf("成功！\n");
  else
    printf("没有能找到要删除的学号！\n");
  printf("按任意键继续。");
    getch();
}
/******************************
 *删除一个学生结点
 *s_num[] 学生学号
 *成功返回1 失败返回0
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
