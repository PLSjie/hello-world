/*
2020��8��29��11:04:02
����������ֺ��±�ĺ���
*/
#include <stdio.h>
int main()
{
	int a[5];
	printf("%#x\n",a);
	printf("%#x\n",&a[0]);
	printf("%#x\n",a+1);
	printf("%#x\n",&a[1]);
	
	return 0;
}
/*
��VC++6.0����������
0x19ff1c
0x19ff1c
0x19ff20
0x19ff20
���ۣ�һά��������һ��ָ�볣��������ŵ��������һ��Ԫ�صĵ�ַ��
	  ���p�Ǹ�ָ���������p[i] = *(p+i)
 */