/*

 时间:2020年8月13日21:52:36
 作用：运算符测试+if...else if...else语句应用
  */
#include <stdio.h>
int main(void)
{
	float score;
	printf("请输入你的分数\n");
	scanf("%f",&score);

	if(score>100)
		printf("你在做梦\n");
	else if((score<=100) && (score>=90))     //不能写成90 <= score <= 100此时无论输入多少结果均为优秀
		printf("优秀\n");
	else if((score<90) && (score>=80))
		printf("良好\n");
	else if((score<80) && (score>=60))
		printf("及格\n");
	else if((score<60) && (score>=0))
		printf("不及格\n");
	else
		printf("输入分数过低，请不要这么自卑\n");
	
	return 0;
}
/*
结果：
在VC++6.0中当第二个人判断语句为90 <= score <= 100只要输入为100以内的数字结果均为优秀
结论：
90<=score<=100   可以分为两个步骤，第一步一个数字与90比较无论大小，关系运算符会输出1或者0均比100小此时条件恒成立
  */