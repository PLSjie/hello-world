/*
2020��8��17��17:46:28
ѧϰʹ�� A ? B : C
*/
# include <stdio.h>
int main(void)
{
	int i = 0;

	i = ((3>2) ? 5 : 1);

	printf("i = %d\n",i);
	return 0;
}
/*
��VC++6.0����������
i = 5
���ۣ���Ŀ������ȼ���
if(A)
	B;
else
	C;
*/