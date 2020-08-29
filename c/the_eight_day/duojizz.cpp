/*
2020年8月29日20:27:36
多级指针定义及简单使用
*/
#include <stdio.h>
int main (void)
{
	int i = 3;
	int* p = &i;
	int** q = &p;
	int*** r = &q;

	printf("%d,%d,%d,%d\n",i,*p,**q,***r);

	return 0;
}
/*
在VC++6.0中输出结果：
3,3,3,3
Press any key to continue
*/