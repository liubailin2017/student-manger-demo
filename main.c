#include <stdio.h>
#include <stdlib.h>
#include"datatype.h"
#include"desktop.h"
#include"find.h"
#include"insert.h"
#include"show.h"
#include"quit.h"
#include"revise.h"
Student *InitSystem() ;//创建表头并初始化

int main()
{
    int select;
    int quite = 0;
    Student *Data = InitSystem();
while(!quite)
    {
    select = MainDesktop();
    switch(select)
    {
        case INSERT :   //运行插入模块
            InsertRun(Data);
            break ;
        case SHOW :     //显示所有成绩信息
            Show(Data);
            break ;
        case Exit_SYS :     //退出时清理工作
            quite = 1;
            Sava_All(Data);
            Destroy_All(Data);
            break;
        case REVISE :
            ReStdDatRun(Data);
            break;
        case FIND :
            FindRun(Data);
            break;
        case COUNT :
            CountRun(Data);
            break;
        case DELECT :   //运行删出模块
            DelectRun(Data);
            break;
            default :
            printf("没有这个选项！\n");
            getch();
    }
}
    return 0;
}

Student *InitSystem() //创建表头并初始化
{
     Student *Data = (Student *)malloc(sizeof(Student));
     Student *ftmp,*tmp;
     tmp = Data;
     Data->Chinese = 0;
     Data->English = 0;
     Data->Math = 0;
     Data->next = NULL;
     Data->prior = NULL;
     strcpy(&Data->S_name,"head");
     strcpy(&Data->S_num,"0000000");
    FILE *fpread = fopen("student.dat","rb");
        if(fpread == NULL)
        {
            FILE *fpread = fopen("student.dat","wb");
            printf("student.dat文件已创建，请重新运行.");
            getch();
            exit(1);
        }
    fgetc(fpread);
    while(!feof(fpread))
    {
        fseek(fpread,-1,SEEK_CUR);
        ftmp = (Student *)malloc(sizeof(Student));
        fread(ftmp,sizeof(Student)-2*sizeof(Student *),1,fpread);
        ftmp->next =NULL;
        ftmp->prior = tmp;
        tmp->next = ftmp;
        tmp = ftmp;
        fgetc(fpread);
    }
    fclose(fpread);
     return Data;
}
