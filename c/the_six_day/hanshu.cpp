/*
2020��8��18��22:03:21
�Զ��庯��
*/
# include<stdio.h>

//max1�Ǻ��������֣�i��j����ʽ����������βΣ�void��ʾ����û�з���ֵ
void max1(int i,int j)
{
	if(i>j)
		printf("%d����%d\n",i,j);
	else
		printf("%d����%d\n",j,i);
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

	printf("��������Ҫ�Ƚϵ�����ֵ(�������Կո�Ϊ�ֽ�)\n");
	scanf("%d %d",&a,&b);
	max1(a,b);
	printf("%d��\n",max2(a,b));
	return 0;
}
/*
��VC++6.0����������
��������Ҫ�Ƚϵ�����ֵ(�������Կո�Ϊ�ֽ�)
12 21
21����12
21��
*/
