/*
	2020��8��30��10:47:23
	�ṹ������ͽṹ��ָ�������Ϊ������������		
*/
#include <stdio.h>
#include <string.h>
struct Student
{
	int age;
	float score;
	char name[100];
};//�ֺò���ʡ
void Input_struct(struct Student *);
void Output_struct(struct Student *);

int main (void)
{
	struct Student st = {80,66.6,"����"};

	printf("%d ,%f ,%s \n",st.age,st.score,st.name);
	Input_struct(&st);
	Output_struct(&st);

	return 0;
}

void Input_struct(struct Student *pstr)
{
	pstr->age = 18;
	pstr->score = 66;
	strcpy(pstr->name,"����");

}

void Output_struct(struct Student *pstd)
{
	printf("%d ,%f ,%s \n",(*pstd).age,(*pstd).score,(*pstd).name);
}
/*
��VC++6.0����������
80 ,66.599998 ,����
18 ,66.000000 ,����
Press any key to continue
ʾ����
	���͵�ַ���Ƿ�������
Ŀ�ģ�
	ָ����ŵ㣺
				���ٵĴ�������
				�����ڴ�С
				ִ���ٶȿ�
*/