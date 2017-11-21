#ifndef DATATYPE_H_INCLUDED
#define DATATYPE_H_INCLUDED


#if defined (__WIN32)
#include<stdlib.h>
#else
#	if defined (linux) || defined(__LYNX)
#define	getch() getchar()
#	endif
#endif

typedef struct _student
{
    char S_num[9];		/*ѧ��ѧ��*/
	char S_name[11];	/*ѧ������*/
	int Chinese;		/*���ĳɼ�*/
	int Math;			/*��ѧ�ɼ�*/
	int English;		/*Ӣ��ɼ�*/
	int Sum;			/*�ܳɼ�*/
	int Rank;			/*�ɼ���������ͬ�ɼ�����Ҳ��ͬ*/
    struct _student *next;
    struct _student *prior;
}Student ;

typedef enum  _Select //��ѡ��
{
    Exit_SYS,   //�˳�
    INSERT,     //����
    DELECT,     //ɾ��
    REVISE,     //�޸�
    FIND,       //����
    COUNT,      //����
    SHOW,       //��ʾ

}Select;


#endif // DATATYPE_H_INCLUDED
