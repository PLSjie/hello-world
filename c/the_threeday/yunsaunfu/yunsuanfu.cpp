/*
2020年8月13日11:17:18
目的:测试运算符
  */
# include <stdio.h>
int main(void)
{
	int k = 20;
	int m;
	m = (3<2) || (k=2);
	printf("m = %d,k = %d\n",m,k);
	
	return 0;
}
/*
测试结果：
1.	m = (3>2) && (k=10);
m = 1,k = 10;
2. m = (3>2) && (k=0);
m = 0,k = 0;
3.m = (3<2) && (k=0);
m = 0,k = 20
4.m = (3>2) || (k=2);
m = 1,k = 20
5.	m = (3<2) || (k=2);
m = 1,k = 2
结论：
1.
赋值，真是1表示，假是0表示

2.
判断条件，非零是真，零是假

3.&& 左边的表达式为假，右边的表达式肯定不会执行，类比串联电路开关，断路（电路）。

4.|| 左边的表达式为真，右边的表达式肯定不会执行，类比并联电路开关。
  */