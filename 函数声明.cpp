/*
��������
*/
#include <stdio.h>

void f(void);//�����������ֺŲ��ܶ���
//void f(int);//error,��Ϊ������ f() 

int main(void)
{
	f();
	
	return 0;
}
void f(void)//û�β�������Ҳ��дvoid 
{
	printf("!!!\n");
}
