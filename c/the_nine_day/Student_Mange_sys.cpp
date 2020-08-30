/*
2020年8月30日15:35:38
学生成绩管理系统
*/
#include <stdio.h>
#include <malloc.h>
struct Student
{
	int age;
	float score;
	char name[100];
};

//输入数据
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

//数据排序,按照成绩进行升序排名
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

//输出
void Output(struct Student *p,int len)
{
	int i;
	printf("\n\n");
	for( i=0; i<len; ++i)
	{
		printf("第%d位学生的数据为:\n",i+1);
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

	printf("欢迎来到学生管理系统\n");
	printf("请输入学生的个数为: ");
	scanf("%d",&len);
	pArr = (struct Student*)malloc(sizeof(struct Student)*len);
	Input(pArr,len);
	Sort(pArr,len);
	Output(pArr,len);

	return 0;
}
/*
	在VC++6.0中输出结果：
	欢迎来到学生管理系统
	请输入学生的个数为: 4
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



	第1位学生的数据为:
	age = 18
	score = 499.000000
	name = lisi

	第2位学生的数据为:
	age = 19
	score = 545.000000
	name = wanger

	第3位学生的数据为:
	age = 18
	score = 396.000000
	name = ligoudan

	第4位学生的数据为:
	age = 18
	score = 565.000000
	name = zhangsan

	Press any key to continue

*/