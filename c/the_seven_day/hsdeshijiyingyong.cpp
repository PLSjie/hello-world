/*
2020��8��28��09:35:45
Ŀ��:��2-һ�����֣�����ģ�֮������������
*/
#include <stdio.h>

//�ú��������ж������mֵ�Ƿ�Ϊ����,�ǵĻ�����True,�෴�ķ���False��
bool If_Prime(int m)
{
	int i;
	for(i=2; i<m; ++i)
	{
		if((m%i) == 0)
		{
			break;
		}
	}
	if(i == m)
		return true;
	else
		return false;
}
//�ĺ������ܽ�2-����֮����������
void Travserse_Prime(int n)
{
	int i;
	for(i=2 ;i<n; ++i)
	{
		if(If_Prime(i))
			printf("%d\n",i);

	}
}
int main()
{
	int i;
	scanf("%d",&i);	
	Travserse_Prime(i);

	return 0;
}
/*
��VC++6.0����������
100
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
�ܽ᣺����д��ʹ�����Ŀ���ֲ�Ը��ߣ��������࣬�����ײ��
*/