/*
	2020年8月29日16:36:24
	malloc 是memory（内存）allocate（分配）的缩写
*/

#include <stdio.h>
#include <malloc.h>	//不能省

int main()
{
	int i = 5;	//分配了4个字节 静态分配 11行
	int *p = (int *)malloc(4);	//12行
		/*
			1.要是用malloc，必须添加malloc.h这个头文件
			2.malloc函数只有一个形参，并且形参是整数
			3.4表示请求系统为本程序分配4个字节
			4.malloc函数只能返回第一个字节的地址
			5.12行分配了8个字节，p变量占4个，p所指向的变量也占4个字节
			6.p本身所占的内存是静态分配的，p所指向的内容时动态分布的

		*/

	*p = 5;	//*p代表的就是一个int变量，只不过*p这个整形变量内存分配的方式和11行的内存分配方式不同
	free(p);//free（p）表示p所指向的内存给释放掉 p本身的内存是静态的，不能由程序释放的
	printf("同志们好\n");

	return 0;
}
/*
在VC++6.0中输出结果：
同志们好
Press any key to continue
*/