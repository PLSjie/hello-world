/*
2020年8月29日11:04:02
数组变量名字和下标的含义
*/
#include <stdio.h>
int main()
{
	int a[5];
	printf("%#x\n",a);
	printf("%#x\n",&a[0]);
	printf("%#x\n",a+1);
	printf("%#x\n",&a[1]);
	
	return 0;
}
/*
在VC++6.0中输出结果：
0x19ff1c
0x19ff1c
0x19ff20
0x19ff20
结论：一维数组名是一个指针常量，它存放的是数组第一个元素的地址。
	  如果p是个指针变量，则p[i] = *(p+i)
 */