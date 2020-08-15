/*
时间:2020.8.11.14.37
作用：对用户非法输入的处理
 */
# include <stdio.h>
int main(void)
{
	int i ;
	char ch;
	scanf("%d",&i);
	printf("i = %d\n",i);

	//...
	/*
	char j;
	scanf("%c",&j);
	printf("j = %d\n",j);
	*/



	while((ch=getchar()) != '\n')
		continue;
	int j;
	scanf("%d",&j);
	printf("j = %d\n",j);
	return 0;
}
/*
调试结果：在VC++6.0的输出结果为：
123m
i = 123
123
j = 123
总结：
 *****************
1因为输入的数据其实是先全都保留在键盘缓冲区中，给i赋值的时候，读取数据123，读到m发现不是数字，终止读取。
2但是m仍在在缓冲区中没有消除，下一个变量j赋值的时候，就直接由m开始
3又因为j是int型，所以读取m发现不是数字，无法给j赋值，所以错误了。
4.如果j是char型，就能够输出字符m
*/