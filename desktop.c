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
 *显示主界面
 *返回选择的功能
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
	printf("|                    欢迎使用我的成绩管理系统Ver:1.0            _口X|\n");
	printf("|-------------------------------------------------------------------|\n");
	printf("|                         1: 录入成绩                               |\n");
	printf("|                         2: 删除成绩                               |\n");
	printf("|                         3: 修改成绩                               |\n");
	printf("|                         4: 成绩查询                               |\n");
	printf("|                         5: 成绩计算并排名                         |\n");
	printf("|                         6: 显示成绩信息                           |\n");
	printf("|                         0: 保存信息并退出系统                     |\n");
	printf("|___________________________________________________________________|\n");
	printf("请选择操作<0-6>\n");
    scanf("%d",&choose);
	myfflush();
    return choose;
}

/****************************
 *显示查找界面
 *返回选择的功能
 ****************************/
SelectChildFind FindDesktop()
{
    SelectChildFind choose;
    system(CLS);
    printf(" ___________________________________________________________________\n");
	printf("*                       跟据指定查寻的内容                          *\n");
	printf("*-------------------------------------------------------------------*\n");
	printf("*                         1: 按学号查询                             *\n");
	printf("*                         2: 按姓名查询                             *\n");
	printf("*                         3: 按名次查询                             *\n");
	printf("*                         0: 退出查询系统，返回主系统               *\n");
	printf("*___________________________________________________________________*\n");
	printf("请选择操作<0-3>\n");
    scanf("%d",&choose);
    myfflush();
    return choose;
}
