/*
2020��1��31�� 16:21:20
����2 
*/
#include <stdio.h>

int f(void)//�����е�void��ʾ�ú������ܽ������� 
{
	return 10;//��������������10 
 } 
 void g(void)
 {
 //	return 10;//error ��11�����׵�void��ì��  
 }
int main(void)//main�������� 
{
	int j = 88;
	
	j = f();
	printf("%d\n",j);
	
	j = g(); 
	return 0;
 } 
