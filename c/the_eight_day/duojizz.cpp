/*
2020��8��29��20:27:36
�༶ָ�붨�弰��ʹ��
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
��VC++6.0����������
3,3,3,3
Press any key to continue
*/