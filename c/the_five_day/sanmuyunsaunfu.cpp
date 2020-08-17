/*
2020年8月17日17:46:28
学习使用 A ? B : C
*/
# include <stdio.h>
int main(void)
{
	int i = 0;

	i = ((3>2) ? 5 : 1);

	printf("i = %d\n",i);
	return 0;
}
/*
在VC++6.0中输出结果：
i = 5
结论：三目运算符等价于
if(A)
	B;
else
	C;
*/