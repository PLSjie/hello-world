/*
2020��8��18��22:18:20
ʹ���Զ��庯��������
*/
#include <stdio.h>

bool Is_Prime(int m)
{
	int i;
	for(i=2 ;i<m ;i++)
		if((m%i) == 0)
			break;
	if (i == m)
		return true;
	else 
		return false;
}
int main(void)
{
	int num;

	printf("��������Ҫ�жϵ�����\n");
	scanf("%d",&num);
	if(Is_Prime(num))
		printf("YES\n");
	else
		printf("NO\n");

	return 0;

}
/*
��VC++6.0����������
��������Ҫ�жϵ�����
5
YES
��������Ҫ�жϵ�����
6
NO
*/