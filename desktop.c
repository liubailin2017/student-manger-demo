#include"desktop.h"
#include"find.h"
#include<stdio.h>
#include<stdlib.h>

#if defined (__WIN32)
#	define CLS "cls"
#else
#	if defined (linux) || defined(__LYNX)
#	define CLS "clear"
#	endif
#endif

/****************************
 *��ʾ������
 *����ѡ��Ĺ���
 ****************************/

void myfflush()
{
	char t;
	while((t=getchar())!='\n' && t != EOF);
}

Select MainDesktop()
{
    int choose;
    system(CLS);
    	printf(" ___________________________________________________________________ \n");
	printf("|                    ��ӭʹ���ҵĳɼ�����ϵͳVer:1.0            _��X|\n");
	printf("|-------------------------------------------------------------------|\n");
	printf("|                         1: ¼��ɼ�                               |\n");
	printf("|                         2: ɾ���ɼ�                               |\n");
	printf("|                         3: �޸ĳɼ�                               |\n");
	printf("|                         4: �ɼ���ѯ                               |\n");
	printf("|                         5: �ɼ����㲢����                         |\n");
	printf("|                         6: ��ʾ�ɼ���Ϣ                           |\n");
	printf("|                         0: ������Ϣ���˳�ϵͳ                     |\n");
	printf("|___________________________________________________________________|\n");
	printf("��ѡ�����<0-6>\n");
    scanf("%d",&choose);
	myfflush();
    return choose;
}

/****************************
 *��ʾ���ҽ���
 *����ѡ��Ĺ���
 ****************************/
SelectChildFind FindDesktop()
{
    SelectChildFind choose;
    system(CLS);
    printf(" ___________________________________________________________________\n");
	printf("*                       ����ָ����Ѱ������                          *\n");
	printf("*-------------------------------------------------------------------*\n");
	printf("*                         1: ��ѧ�Ų�ѯ                             *\n");
	printf("*                         2: ��������ѯ                             *\n");
	printf("*                         3: �����β�ѯ                             *\n");
	printf("*                         0: �˳���ѯϵͳ��������ϵͳ               *\n");
	printf("*___________________________________________________________________*\n");
	printf("��ѡ�����<0-3>\n");
    scanf("%d",&choose);
    myfflush();
    return choose;
}
