/*
2020��8��29��19:24:58
����һά��̬���鼰һά��̬����ļ�ʹ��
*/
#include <stdio.h>
#include <malloc.h>

int main()
{
	int a[5] = {0,1,2,3,4};	//���intռ4���ֽڵĻ����������ܹ�������20���ֽڣ�ÿ4���ֽڱ�������һ��int������ʹ��
					
	int len;
	int i;
	int*pArr;
	
	printf("���������������ҪԪ�صĸ���:\n");
	scanf("%d",&len);
	//һά��̬����Ĵ���
	pArr = (int*)malloc(4*len);
	//һά��̬�����Ӧ�ã���ֵ
	for( i=0; i<len; ++i)
		scanf("%d",pArr+i);
	//һά��̬��������
	for( i=0; i<len; ++i)
		printf("%d\n",pArr[i]);
	//�ͷŵ���̬���������
	free(pArr);

	return 0;
}
/*
��VC++6.0����������
���������������ҪԪ�صĸ���:
5
1 2 3 8 9
1
2
3
8
9
Press any key to continue
*/