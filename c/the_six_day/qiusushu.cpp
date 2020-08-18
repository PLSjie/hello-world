/*
2020年8月18日22:18:20
使用自定义函数求素数
*/
#include <stdio.h>

bool Is_Prime(int m)
{
	int i;
	for(i=2 ;i<m ;i++)
		if((m%i) == 0)
			break;
	if (i == m)
		return true;
	else 
		return false;
}
int main(void)
{
	int num;

	printf("请输入需要判断的数字\n");
	scanf("%d",&num);
	if(Is_Prime(num))
		printf("YES\n");
	else
		printf("NO\n");

	return 0;

}
/*
在VC++6.0中输出结果：
请输入需要判断的数字
5
YES
请输入需要判断的数字
6
NO
*/