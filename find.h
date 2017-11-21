#ifndef FIND_H_INCLUDED
#define FIND_H_INCLUDED
#include"datatype.h"
typedef enum _SelectChildFind
{
    F_RETURN = 0,
    F_NUM,
    F_NAME,
    F_RANK
}SelectChildFind;
extern int FindRun(Student *Data_head);
extern int FindforNum(Student *Data_head);
extern int FindforName(Student *Data_head);
extern int FindforRank(Student *Data_head);
#endif // FIND_H_INCLUDED
