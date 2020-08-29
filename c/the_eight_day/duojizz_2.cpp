/*
	2020年8月29日21:16:02
	动态内存可以跨函数使用
*/
#include<stdio.h>
#include<malloc.h>

void f(int **q)
{
	int i = 5;
	*q = (int*)malloc(sizeof(int)); 
	**q = 5;

}
int main (void)
{
	int *p;

	f(&p);
	printf("%d\n",*p);
	return 0;
}
/*
在VC++6.0中输出结果：
5
Press any key to continue
*/