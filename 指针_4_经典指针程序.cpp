/*
����ָ����� 
������������
 127
*/
#include <stdio.h>

//��������ʱһ�㲻д�β� 	void huhuan(int *,int *)

void huhuan(int * p,int * q)//�β�������p��q������ʵ�������ݵ���p�� 
{
	int t;//���Ҫ����p��q��ֵ����t������int *��������int���������� 
		  //���Ҫ����*p��*q��ֵ����t������int��������int *	�������� 
	
	 t = * p;//p��int * 	* p��int 
	* p = * q;
	* q = t; 

	return;
}

int main(void)
{
	int a = 3;
	int b = 5;
	
	 
	 
	huhuan(&a ,&b);
	printf("a = %d,b = %d",a,b);
	
	return 0;
}
