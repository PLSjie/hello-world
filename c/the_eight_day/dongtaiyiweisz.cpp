/*
2020年8月29日19:24:58
创建一维动态数组及一维动态数组的简单使用
*/
#include <stdio.h>
#include <malloc.h>

int main()
{
	int a[5] = {0,1,2,3,4};	//如果int占4个字节的话，则本数组总共包含有20个字节，每4个字节被当做了一个int变量来使用
					
	int len;
	int i;
	int*pArr;
	
	printf("请输入该数组所需要元素的个数:\n");
	scanf("%d",&len);
	//一维动态数组的创建
	pArr = (int*)malloc(4*len);
	//一维动态数组的应用：赋值
	for( i=0; i<len; ++i)
		scanf("%d",pArr+i);
	//一维动态数组的输出
	for( i=0; i<len; ++i)
		printf("%d\n",pArr[i]);
	//释放掉动态分配的数组
	free(pArr);

	return 0;
}
/*
在VC++6.0中输出结果：
请输入该数组所需要元素的个数:
5
1 2 3 8 9
1
2
3
8
9
Press any key to continue
*/