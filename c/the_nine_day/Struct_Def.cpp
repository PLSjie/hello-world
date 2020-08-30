/*
2020年8月30日08:56:45
三种结构体的定义方式
*/
#include <stdio.h>
//方式一先定义结构体（数据类型），再在需要的地方定义变量
struct Student
{
	int age;
	float score;
	char sex;
};

/*
//方式二结构体和变量同时定义，这种结构体只能使用一次，生成的是全局变量
struct Student2
{
	int age;
	float score;
	char sex;
} st2;

//方式三类方式二
struct 
{
	int age;
	float score;
	char sex;
} st3;
*/

int main (void)
{
	struct Student st1 = {80,66.6,'F'};//初始化方式一，定义同时赋初值
	struct Student st2;
	struct Student *pst = &st2;

	st2.age = 10;
	pst->score = 88;//在计算机内部会被转化为（*pst）.age即pst->score = (*pst).score = st2.score
	st2.sex = 'F';//初始化方式二先定义后一个一个赋值

	printf("%d %f %c\n",st1.age,st1.score,st1.sex);
	printf("%d %f %c\n",st2.age,st2.score,st2.sex);

	return 0;
}
/*
在VC++6.0中输出结果：
80 66.599998 F
10 88.000000 F
Press any key to continue

*/