/*
2020��8��16��11:03:16
for-ifǶ��
*/
#include <stdio.h>
int main(void)
{
	int i ;
	int sum = 0;
	for( i=3 ;  i<=10; ++i)
	{
		if(i%3 == 0)
			sum = sum +i;
		printf("sum = %d\n",sum);
	}
	return 0;
}
/*
��VC++6.0��������
sum = 3
sum = 3
sum = 3
sum = 9
sum = 9
sum = 9
sum = 18
sum = 18
*/