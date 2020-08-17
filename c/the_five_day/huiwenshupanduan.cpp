/*
2020年8月17日19:20:58
回文数的判断
*/
# include <stdio.h>
int main (void)
{
	int val;//用来存储输入的数字
	int m;  //val->sum的中间变量
	int sum = 0;//用来存储倒置的数字

	printf("请输入需要判断的数字:\n");
	scanf("%d",&val);
	m = val;
	while(m)
	{
		sum = sum*10 + m%10;
		m /= 10;
	}
	if(sum == val)
		printf("YES\n");
	else
		printf("NO\n");
	
	return 0;
}
/*
在VC++6.0中输出结果：
121
YES
1234
NO
12321
YES
*/