/*

 ʱ��:2020��8��13��21:52:36
 ���ã����������+if...else if...else���Ӧ��
  */
#include <stdio.h>
int main(void)
{
	float score;
	printf("��������ķ���\n");
	scanf("%f",&score);

	if(score>100)
		printf("��������\n");
	else if((score<=100) && (score>=90))     //����д��90 <= score <= 100��ʱ����������ٽ����Ϊ����
		printf("����\n");
	else if((score<90) && (score>=80))
		printf("����\n");
	else if((score<80) && (score>=60))
		printf("����\n");
	else if((score<60) && (score>=0))
		printf("������\n");
	else
		printf("����������ͣ��벻Ҫ��ô�Ա�\n");
	
	return 0;
}
/*
�����
��VC++6.0�е��ڶ������ж����Ϊ90 <= score <= 100ֻҪ����Ϊ100���ڵ����ֽ����Ϊ����
���ۣ�
90<=score<=100   ���Է�Ϊ�������裬��һ��һ��������90�Ƚ����۴�С����ϵ����������1����0����100С��ʱ���������
  */