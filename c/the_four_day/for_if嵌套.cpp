/*
2020年8月16日11:03:16
for-if嵌套
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
在VC++6.0中输出结果
sum = 3
sum = 3
sum = 3
sum = 9
sum = 9
sum = 9
sum = 18
sum = 18
*/