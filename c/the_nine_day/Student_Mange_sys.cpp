/*
2020��8��30��15:35:38
ѧ���ɼ�����ϵͳ
*/
#include <stdio.h>
#include <malloc.h>
struct Student
{
	int age;
	float score;
	char name[100];
};

//��������
void Input(struct Student *p,int len)
{	
	int i;
	for( i=0; i<len; ++i)
	{
		printf("age = ");
		scanf("%d",&p[i].age);
		printf("score = ");
		scanf("%f",&p[i].score);
		printf("name = ");
		scanf("%s",p[i].name);
		printf("\n");
	}
}

//��������,���ճɼ�������������
void Sort(struct Student *p,int len)
{
	int i,j;
	struct Student t;
	for( i=0; i<len; ++i)
	{
		for( j=0; j<len-1-i; ++j)
		{
			if(p[i].score > p[i+1].score)
			{
				t = p[i];
				p[i] = p[i+1];
				p[i+1] = t;			
			}
		}
	}

}

//���
void Output(struct Student *p,int len)
{
	int i;
	printf("\n\n");
	for( i=0; i<len; ++i)
	{
		printf("��%dλѧ��������Ϊ:\n",i+1);
		printf("age = %d\n",p[i].age);
		printf("score = %f\n",p[i].score);
		printf("name = %s\n",p[i].name);
		printf("\n");
	}
}

int main (void)
{
	int len;
	struct Student * pArr;

	printf("��ӭ����ѧ������ϵͳ\n");
	printf("������ѧ���ĸ���Ϊ: ");
	scanf("%d",&len);
	pArr = (struct Student*)malloc(sizeof(struct Student)*len);
	Input(pArr,len);
	Sort(pArr,len);
	Output(pArr,len);

	return 0;
}
/*
	��VC++6.0����������
	��ӭ����ѧ������ϵͳ
	������ѧ���ĸ���Ϊ: 4
	age = 18
	score = 565
	name = zhangsan

	age = 18
	score = 499
	name = lisi

	age = 19
	score = 545
	name = wanger

	age = 18
	score = 396
	name = ligoudan



	��1λѧ��������Ϊ:
	age = 18
	score = 499.000000
	name = lisi

	��2λѧ��������Ϊ:
	age = 19
	score = 545.000000
	name = wanger

	��3λѧ��������Ϊ:
	age = 18
	score = 396.000000
	name = ligoudan

	��4λѧ��������Ϊ:
	age = 18
	score = 565.000000
	name = zhangsan

	Press any key to continue

*/