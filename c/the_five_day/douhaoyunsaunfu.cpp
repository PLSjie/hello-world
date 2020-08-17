/*
2020年8月17日17:59:36
测试逗号运算符
*/
# include <stdio.h>
int main(void)
{
	int i;
	int j = 2;

	i = (j++ , ++j, j+2, j-3);
	printf("i = %d\n",i);

	return 0;
}
/*
在VC++6.0中输出结果：
i = 1
结论：
执行顺序从左到右依次执行
最终的值是表达式最后一项
注意点：j+2并没有给j赋值不等同于 j+= 2
*/