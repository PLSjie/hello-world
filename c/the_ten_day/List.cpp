/*
	2020年9月1日10:03:51
	链表的定义及简单使用
*/
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

//创建链表的数据类型
struct Node 
{
	int data;
	struct Node * pNext;
};

 //创建一个非循环单链表，并将该链表的头结点的地址付给pHead
struct Node* create_list(void);
//遍历链表
void traverse_list(struct Node *);


int main (void)
{
	struct Node * pHead = NULL;

	pHead = create_list();
	traverse_list(pHead);

	return 0;
}

struct Node  *create_list(void)
{
	int len;
	int i;
	int val;
	
	struct Node *pHead = (struct Node *)malloc(sizeof(struct Node));
	if(NULL == pHead)
	{
		printf("分配失败，程序终止!\n");
		exit(-1);
	}
	struct Node * pTail = pHead;
	pTail -> pNext = NULL;

	printf("请输入您需要生成的链表节点的个数：len = ");
	scanf("%d", &len);

	for (i = 0; i<len; ++i)
	{
		printf("请输入第%d个节点的值: ", i+1);
		scanf("%d", &val);
		
		struct Node * pNew = (struct Node *)malloc(sizeof(struct Node));
		if (NULL == pNew)
		{
			printf("分配失败, 程序终止!\n");
			exit(-1);  //终止程序
		}
		pNew->data = val;
		pTail->pNext = pNew;
		pNew->pNext = NULL;
		pTail = pNew;	
	}
	return pHead;
}
	
void traverse_list(struct Node * pHead)
{
	struct Node * p = pHead->pNext;

	while (NULL != p)
	{
		printf("%d  ", p->data);
		p = p->pNext;
	}
	printf("\n");
	
	return;
}
/*
在VC++6.0中输出结果：
	请输入您需要生成的链表节点的个数：len = 5
	请输入第1个节点的值: 1
	请输入第2个节点的值: 2
	请输入第3个节点的值: 3
	请输入第4个节点的值: 4
	请输入第5个节点的值: 5
	1  2  3  4  5
	Press any key to continue
*/