/*
	2020��8��30��14:45:34
	ð������(�ٶȿ����ȶ�)
*/
#include <stdio.h>
//����ð������
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

//����ð������
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

//�������Ľ��
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
��VC++6.0����������
-3 -2 5 6 8
8 6 5 -2 -3
Press any key to continue
*/