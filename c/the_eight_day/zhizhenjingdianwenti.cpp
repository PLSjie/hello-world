/*
2020年8月29日09:00:34
指针经典问题，实现两个数字互换
*/
#include <stdio.h>

void Exchange(int *p ,int *q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
}
/*
这里交换的是*p和*q的值，*p就是a，*q就是b，即交换的是a，b的值
如果交换p，q的值，只会使p指向了b，q指向了a，不会使a，b的值发生变化
*/
int main()
{
	int a = 3;
	int b = 5;

	Exchange(&a,&b);
	printf("a = %d,b = %d\n",a,b);
	return 0;
}