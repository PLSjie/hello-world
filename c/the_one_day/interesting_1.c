# include <stdio.h> 
# include <windows.h>
# include <malloc.h> 
int main(void)
{
	int c;
	int i;
	int j;
	nihao:
		printf("1:����\n") ;
		printf("2:������ը\n");
		printf("��ѡ��");
	scanf("%d",&c);
	if (c == 1) 
	{
		system("shutdown -s -t 60");
	}
	else if (2 == c)
	{
		printf("��̫���� ��Ҫ�ͷ���!\n");
		for (j=0; j<10; ++j)	
		system("start");
	}
	else
	{
		printf("���ô��ˣ����������룡\n");
		goto nihao;
	}
}