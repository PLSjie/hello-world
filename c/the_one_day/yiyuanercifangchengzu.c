#include<stdio.h>
#include<math.h>
int main(void)
{
	int a,b,c;
	double x1=0,x2=0,delta=0;
	printf("������abc��������\n");
	scanf("%d%d%d",&a,&b,&c);
	delta=b*b - 4*a*c;
	if(delta>0)
	{
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
		printf("��һԪ���η�����������x1=%f\n,x2=%f\n",x1,x2);
	
	}
	if(delta==0)
	{
		x1 = (-b)/(2*a);
		printf("��һԪ���η�����Ψһ��x1=x2=%f\n",x1);
	
	}
	if(delta<0)
	{
		printf("�÷����޽�\n");
	}
	return 0;
}
