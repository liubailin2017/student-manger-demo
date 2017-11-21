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
    char S_num[9];		/*学生学号*/
	char S_name[11];	/*学生姓名*/
	int Chinese;		/*语文成绩*/
	int Math;			/*数学成绩*/
	int English;		/*英语成绩*/
	int Sum;			/*总成绩*/
	int Rank;			/*成绩排名，相同成绩名次也相同*/
    struct _student *next;
    struct _student *prior;
}Student ;

typedef enum  _Select //主选单
{
    Exit_SYS,   //退出
    INSERT,     //插入
    DELECT,     //删除
    REVISE,     //修改
    FIND,       //查找
    COUNT,      //计算
    SHOW,       //显示

}Select;


#endif // DATATYPE_H_INCLUDED
