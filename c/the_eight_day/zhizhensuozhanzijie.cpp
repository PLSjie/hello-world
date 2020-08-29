/*
2020年8月29日14:59:02
求指针变量所占的字节数
*/

#include <stdio.h>
int main(void)
{
	char ch = 'A';
	int i = 99;
	double x = 66.6;
	char *p = &ch;
	int *q = &i;
	double *r = &x;

	printf("%d,%d,%d\n",sizeof(p),sizeof(q),sizeof(r));

	return 0;
}
/*
在VC++6.0中输出结果：
4,4,4
Press any key to continue
结论：
指针变量p，q，r无论它所指向变量占多少字节，指针变量只占4个字节
*/