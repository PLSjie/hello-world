/*
2020��8��29��09:00:34
ָ�뾭�����⣬ʵ���������ֻ���
*/
#include <stdio.h>

void Exchange(int *p ,int *q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
}
/*
���ｻ������*p��*q��ֵ��*p����a��*q����b������������a��b��ֵ
�������p��q��ֵ��ֻ��ʹpָ����b��qָ����a������ʹa��b��ֵ�����仯
*/
int main()
{
	int a = 3;
	int b = 5;

	Exchange(&a,&b);
	printf("a = %d,b = %d\n",a,b);
	return 0;
}