/*
2020��2��7�� 21:14:35 
*/
#include <stdio.h>

//����һ������ڵ���������� 
struct Node
{
	int data;
	struct Node * pNext;
 } ;

int main(void)
{
	struct Node * pHead;//pHead�����������ͷ���ĵ�ַ
	
	pHead = CreateList();
	TraverseList(pHead); 
	
	return 0;
 } 
