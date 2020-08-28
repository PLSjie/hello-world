/*
2020年8月28日09:35:45
目的:求2-一个数字（输入的）之间的素数并输出
*/
#include <stdio.h>

//该函数功能判断输入的m值是否为素数,是的话返回True,相反的返回False；
bool If_Prime(int m)
{
	int i;
	for(i=2; i<m; ++i)
	{
		if((m%i) == 0)
		{
			break;
		}
	}
	if(i == m)
		return true;
	else
		return false;
}
//改函数功能将2-该数之间的素数输出
void Travserse_Prime(int n)
{
	int i;
	for(i=2 ;i<n; ++i)
	{
		if(If_Prime(i))
			printf("%d\n",i);

	}
}
int main()
{
	int i;
	scanf("%d",&i);	
	Travserse_Prime(i);

	return 0;
}
/*
在VC++6.0中输出结果：
100
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
总结：该种写法使函数的可移植性更高，代码更简洁，更容易查错。
*/