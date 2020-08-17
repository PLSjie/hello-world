/*
2020年8月16日10:05:07
测试if...else if...else的运行顺序
*/
#include <stdio.h>
int main(void)
{
	if(3 > 2)
		printf("AAAA\n");
	else if(2 > 1)
		printf("BBBB\n");
	else
		printf("CCCC\n");
	return 0;
}
/*
在VC++6.0中输出结果
AAAA
结论：在if(条件一/表达式一)
		...
		else if(条件二/表达式二)
		...
		else
即便条件一条件二都成立，也只会执行A语句
*/