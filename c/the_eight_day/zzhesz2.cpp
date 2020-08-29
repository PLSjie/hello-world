/*
2020年8月29日14:09:43
通过函数（使用指针）输出数组
*/
#include <stdio.h>
//该函数的作用用来输出数组的所有元素
void Output(int *P,int len)
{
	int i;
	for(i = 0; i<len ;++i)
	{
		printf("%d ",P[i]);//这个的*（P+i）可等效为P[i]
	}
	printf("\n");
}

//该函数用来测试通过被调函数来改变函数数组里面mao个元素的值
void Replace(int *Q,int len)
{
	Q[0] = 11;

}
int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	int b[100] = {-1 ,2 ,-8 ,555};

	Output(a,5);
	Output(b,100);
	printf("%d\n",a[0]);
	Replace(a,5);
	printf("%d\n",a[0]);

	return 0;
}
/*
在VC++6.0中输出结果：
1 2 3 4 5
-1 2 -8 555 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1
11
Press any key to continue
*/
