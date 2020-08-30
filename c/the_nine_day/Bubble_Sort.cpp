/*
	2020年8月30日14:45:34
	冒泡排序(速度快且稳定)
*/
#include <stdio.h>
//升序冒泡排序
void Sort1(int* p,int len)
{
	int i,j,t;
	for( i=0; i<len; ++i)
	{
		for( j=0; j<len-1-i;++j)
		{
			if( p[j] > p[j+1])
			{
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = t;
			}
		}
	}
}

//降序冒泡排序
void Sort2(int* p,int len)
{
	int i,j,t;
	for( i=0; i<len; ++i)
	{
		for( j=0; j<len-1-i;++j)
		{
			if( p[j] < p[j+1])
			{
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = t;
			}
		}
	}
}

//输出排序的结果
void Output(int* q,int len)
{
	int i;
	for( i=0; i<len; ++i)
		printf("%d ",q[i]);
}

int main(void)
{
	int a[5] = {5,-2,6,-3,8};

	Sort1(a,5);
	Output(a,5);
	printf("\n");

	Sort2(a,5);
	Output(a,5);
	printf("\n");

	return 0;
}
/*
在VC++6.0中输出结果：
-3 -2 5 6 8
8 6 5 -2 -3
Press any key to continue
*/