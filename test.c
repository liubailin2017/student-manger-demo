#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include"show.h"
int main()
{	Student st;
	strcpy(st.S_name,"≤‚ ‘");
	strcpy(st.S_num,"1234567");
	st.Chinese = 100;
	st.Math = 120;
	st.English = 100;
	st.Sum = 320;
	st.Rank = 1;
st.next =NULL;
PRINT(&st);
getch();
return 0;
}
