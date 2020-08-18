/*
2020年8月18日12:34:25
练习一位数组倒置
*/
#include <stdio.h>
int main(void)
{
	int a[8] = {1, 2, 3, 4, 5, 6 ,7 ,8};
	int i,j;
	int t;
/*
	for(i=0; i < (7-i); i++)
	{
		t = a[i];
		a[i] = a[7-i];
		a[7-i] = t;
	}
*/

	i = 0;
	j = 7;
	while(i < j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		
		i++;
		--j;
	  
	}//这种写法可移植性比上面的好一些
	


	for(i=0; i<8; i++)
		printf("%d\n",a[i]);
	
	return 0;		
}
/*
在VC++6.0中输出结果：
8
7
6
5
4
3
2
1
 */

