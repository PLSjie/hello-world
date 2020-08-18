/*
2020年8月18日22:03:21
自定义函数
*/
# include<stdio.h>

//max1是函数的名字，i，j是形式参数，简称形参，void表示函数没有返回值
void max1(int i,int j)
{
	if(i>j)
		printf("%d大于%d\n",i,j);
	else
		printf("%d大于%d\n",j,i);
}

int max2(int i,int j)
{
	if(i > j)
		return i;
	else
		return j;
}

int main(void)
{
	int a,b;

	printf("请输入你要比较的两个值(两个数以空格为分界)\n");
	scanf("%d %d",&a,&b);
	max1(a,b);
	printf("%d大\n",max2(a,b));
	return 0;
}
/*
在VC++6.0中输出结果：
请输入你要比较的两个值(两个数以空格为分界)
12 21
21大于12
21大
*/
