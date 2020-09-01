/*
	2020��9��1��10:03:51
	����Ķ��弰��ʹ��
*/
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

//�����������������
struct Node 
{
	int data;
	struct Node * pNext;
};

 //����һ����ѭ�������������������ͷ���ĵ�ַ����pHead
struct Node* create_list(void);
//��������
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
		printf("����ʧ�ܣ�������ֹ!\n");
		exit(-1);
	}
	struct Node * pTail = pHead;
	pTail -> pNext = NULL;

	printf("����������Ҫ���ɵ�����ڵ�ĸ�����len = ");
	scanf("%d", &len);

	for (i = 0; i<len; ++i)
	{
		printf("�������%d���ڵ��ֵ: ", i+1);
		scanf("%d", &val);
		
		struct Node * pNew = (struct Node *)malloc(sizeof(struct Node));
		if (NULL == pNew)
		{
			printf("����ʧ��, ������ֹ!\n");
			exit(-1);  //��ֹ����
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
��VC++6.0����������
	����������Ҫ���ɵ�����ڵ�ĸ�����len = 5
	�������1���ڵ��ֵ: 1
	�������2���ڵ��ֵ: 2
	�������3���ڵ��ֵ: 3
	�������4���ڵ��ֵ: 4
	�������5���ڵ��ֵ: 5
	1  2  3  4  5
	Press any key to continue
*/