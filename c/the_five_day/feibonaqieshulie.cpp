/*
2020年8月17日19:38:06
求斐波那契数列第n项
1 1 2 3 5 8 13 21...
*/
#include <stdio.h>

int main(void)
{
	int i;
	int n;//用来记录第n项
	int F1,F2,F3;//F1,F2,F3分别表示第n-2项n-1项和第n项的数
	F1 = 1;
	F2 = 1;

	printf("请输入你想要查看的项数\n");
	scanf("%d",&n);
	if((1==n) || (2 == n))
		F3 = 1;
	else
		for(i=3; i<=n; i++)
		{
			F3 = F1 + F2;
			F1 = F2;
			F2 = F3;
		}
	printf("第 %d 项的值为 %d\n",n,F3);

	return 0; 
}
/*
在VC++6.0中输出结果：
请输入你想要查看的项数
5
第 5 项的值为 5
*/