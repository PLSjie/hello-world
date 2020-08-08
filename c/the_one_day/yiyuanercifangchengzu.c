#include<stdio.h>
#include<math.h>
int main(void)
{
	int a,b,c;
	double x1=0,x2=0,delta=0;
	printf("请输入abc三个参数\n");
	scanf("%d%d%d",&a,&b,&c);
	delta=b*b - 4*a*c;
	if(delta>0)
	{
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
		printf("该一元二次方程有两个解x1=%f\n,x2=%f\n",x1,x2);
	
	}
	if(delta==0)
	{
		x1 = (-b)/(2*a);
		printf("该一元二次方程有唯一解x1=x2=%f\n",x1);
	
	}
	if(delta<0)
	{
		printf("该方程无解\n");
	}
	return 0;
}
