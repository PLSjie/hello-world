/*
2020-8-16 11:57:11
��1+1/2...+1/100
*/
#include <stdio.h>

int main(void)
{
	float sum = 0;
	int i;
	for( i=1; i<=100; i++)
		sum = sum + 1.0/i;
	printf("%f\n",sum);
	return 0;
}
/*
��VC++6.0��������
5.187378
*/