/*
2020��8��29��14:59:02
��ָ�������ռ���ֽ���
*/

#include <stdio.h>
int main(void)
{
	char ch = 'A';
	int i = 99;
	double x = 66.6;
	char *p = &ch;
	int *q = &i;
	double *r = &x;

	printf("%d,%d,%d\n",sizeof(p),sizeof(q),sizeof(r));

	return 0;
}
/*
��VC++6.0����������
4,4,4
Press any key to continue
���ۣ�
ָ�����p��q��r��������ָ�����ռ�����ֽڣ�ָ�����ֻռ4���ֽ�
*/