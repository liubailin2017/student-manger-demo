#include <stdio.h>
#include <stdlib.h>
#include"datatype.h"
#include"desktop.h"
#include"find.h"
#include"insert.h"
#include"show.h"
#include"quit.h"
#include"revise.h"
Student *InitSystem() ;//������ͷ����ʼ��

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
        case INSERT :   //���в���ģ��
            InsertRun(Data);
            break ;
        case SHOW :     //��ʾ���гɼ���Ϣ
            Show(Data);
            break ;
        case Exit_SYS :     //�˳�ʱ������
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
        case DELECT :   //����ɾ��ģ��
            DelectRun(Data);
            break;
            default :
            printf("û�����ѡ�\n");
            getch();
    }
}
    return 0;
}

Student *InitSystem() //������ͷ����ʼ��
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
            printf("student.dat�ļ��Ѵ���������������.");
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
