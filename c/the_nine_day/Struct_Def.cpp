/*
2020��8��30��08:56:45
���ֽṹ��Ķ��巽ʽ
*/
#include <stdio.h>
//��ʽһ�ȶ���ṹ�壨�������ͣ���������Ҫ�ĵط��������
struct Student
{
	int age;
	float score;
	char sex;
};

/*
//��ʽ���ṹ��ͱ���ͬʱ���壬���ֽṹ��ֻ��ʹ��һ�Σ����ɵ���ȫ�ֱ���
struct Student2
{
	int age;
	float score;
	char sex;
} st2;

//��ʽ���෽ʽ��
struct 
{
	int age;
	float score;
	char sex;
} st3;
*/

int main (void)
{
	struct Student st1 = {80,66.6,'F'};//��ʼ����ʽһ������ͬʱ����ֵ
	struct Student st2;
	struct Student *pst = &st2;

	st2.age = 10;
	pst->score = 88;//�ڼ�����ڲ��ᱻת��Ϊ��*pst��.age��pst->score = (*pst).score = st2.score
	st2.sex = 'F';//��ʼ����ʽ���ȶ����һ��һ����ֵ

	printf("%d %f %c\n",st1.age,st1.score,st1.sex);
	printf("%d %f %c\n",st2.age,st2.score,st2.sex);

	return 0;
}
/*
��VC++6.0����������
80 66.599998 F
10 88.000000 F
Press any key to continue

*/