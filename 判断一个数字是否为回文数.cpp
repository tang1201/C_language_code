/*
ѧϰ��ο���һ������_1
2020��1��29�� 09:57:35 
*/ 
#include <stdio.h>

int main(void)
{
	int val;//��Ŵ��жϵ�����
	int m;
	int sum = 0;
	
	printf("����������Ҫ�жϵ����֣�");
	scanf("%d",&val);
	
	m = val; 
	while (m)
	{
		sum = sum * 10 + m%10;
		m /= 10;
	}
	if (sum == val)
	printf("yes!\n");
	else
	printf("no!\n");
	
	return 0;
}
/*
��������������������������������
�ջ�
 
while (m)
	{
		sum = sum * 10 + m%10;
		m /= 10;
	}
	
��ѭ���Ĺ����ǽ����ֵ�����
���罫1234���4321 
�������������������������������� 
*/
