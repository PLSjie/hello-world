/*
	2020年8月30日10:47:23
	结构体变量和结构体指针变量作为函数参数传递		
*/
#include <stdio.h>
#include <string.h>
struct Student
{
	int age;
	float score;
	char name[100];
};//分好不能省
void Input_struct(struct Student *);
void Output_struct(struct Student *);

int main (void)
{
	struct Student st = {80,66.6,"李四"};

	printf("%d ,%f ,%s \n",st.age,st.score,st.name);
	Input_struct(&st);
	Output_struct(&st);

	return 0;
}

void Input_struct(struct Student *pstr)
{
	pstr->age = 18;
	pstr->score = 66;
	strcpy(pstr->name,"张三");

}

void Output_struct(struct Student *pstd)
{
	printf("%d ,%f ,%s \n",(*pstd).age,(*pstd).score,(*pstd).name);
}
/*
在VC++6.0中输出结果：
80 ,66.599998 ,李四
18 ,66.000000 ,张三
Press any key to continue
示例：
	发送地址还是发送内容
目的：
	指针的优点：
				快速的传递数据
				耗用内存小
				执行速度快
*/