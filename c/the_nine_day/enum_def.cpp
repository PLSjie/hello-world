/*
	2020年8月30日16:38:38
	枚举的定义及简单使用
*/
#include <stdio.h>
enum WeekDay
{
	Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
};

void enum_def(enum WeekDay n)
{
	switch (n)
	{
	case 0:
		printf("Monday\n");
		break;
	case 1:
		printf("Tuesday\n");
		break;
	case 2:
		printf("Wednesday\n");
		break;
	case 3:
		printf("Thursday\n");
		break;
	case 4:
		printf("Friday\n");
		break;
	case 5:
		printf("Saturday\n");
		break;
	case 6:
		printf("Sunday\n");
		break;
	
	
	
	
	}
}
int main(void)
{
	enum_def(Friday);
	return 0;
}