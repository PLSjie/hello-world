/*
2020��8��17��19:20:58
���������ж�
*/
# include <stdio.h>
int main (void)
{
	int val;//�����洢���������
	int m;  //val->sum���м����
	int sum = 0;//�����洢���õ�����

	printf("��������Ҫ�жϵ�����:\n");
	scanf("%d",&val);
	m = val;
	while(m)
	{
		sum = sum*10 + m%10;
		m /= 10;
	}
	if(sum == val)
		printf("YES\n");
	else
		printf("NO\n");
	
	return 0;
}
/*
��VC++6.0����������
121
YES
1234
NO
12321
YES
*/