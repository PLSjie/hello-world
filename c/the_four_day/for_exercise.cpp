/*
2020年8月16日12:46:22
求1-100奇数和，奇数个数，奇数平均数，偶数和
*/
#include <stdio.h>
int main(void)
{
	int i=0,j=0,t=0,k=0;//i用来自增；j用来记奇数和，t用来记数量，k用来记偶数和,s用来记平均值
	float s = 0;
	for(i=1; i<=100; i++)
	{
	if(i%2 == 0)
	{
		k += i;
	}
	else
	{
		j += i;
		t++;
	}
	}
	s = j / t;
	printf("1-100奇数和为 %d\n个数为 %d\n平均值为 %f\n偶数和为 %d\n",j,t,s,k);
	return 0;
}
/*
在VC++6.0中输出结果：
1-100奇数和为 2500
个数为 50
平均值为 50.000000
偶数和为 2550
*/