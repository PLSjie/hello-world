/*
	2020��8��29��21:16:02
	��̬�ڴ���Կ纯��ʹ��
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
��VC++6.0����������
5
Press any key to continue
*/