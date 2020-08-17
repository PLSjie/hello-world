/*
2020年8月17日12:18:46
i++(后自增)和++i(前自增)的区别
*/ 
#include <stdio.h>

int main(void)
{
	int i = 0, j = 0, m  = 0, n = 0;

	i = j = 3;
	m = i++;
	n = ++j;

	printf("i = %d j = %d\nm = %d n = %d\n",i,j,m,n);
	return 0;
}
/*
在VC++6.0中输出结果：
i = 4 j = 4
m = 3 n = 4
总结：
前自增整体表达式的值是i+1之后的值
后自增整体表达式的值是i+1之前的值
*/