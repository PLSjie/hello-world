/*
2020��8��28��19:46:35
ָ��Ļ���Ӧ��
*/
#include <stdio.h>

int main(void)
{
	int * p;	//p�Ǳ������֣�int *��ʾp������ŵ���int���ͱ����ĵ�ַ
				//int * p,����ʾ������һ�����ֽ���*p�ı���
				//int * p,Ӧ���������⣬p�Ǳ�������p����������������int *����
				//��νint *���ͣ����;�ʮ���int������ַ������
	int i =10;

	p = &i;
/*
1.p������i�ĵ�ַ�����pָ��i
2.p����i��iҲ����p����׼ȷ��˵���޸�p��ֵ��Ӱ��i��ֵ���޸�i��Ҳ��Ӱ��p
3.���һ��ָ�����ָ����ð����ͨ��������*ָ�����������ȫ��ͬ�� ��ͨ����
	���磺
		���p�Ǹ�ָ�����������p�������ͨ����i�ĵ�ַ
		��pָ������ͨ����
		*p����ȫ��ͬ�� i
		����˵:���г���*p�ĵط������滻��i��

		*p������p������λ��ַ�ı���
*/
				


	printf("%d\n",*p);
	return 0;
}
/*
��VC++6.0����������
10
*/