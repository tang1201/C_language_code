/*

*/
#include<stdio.h>

void f(void)
{
	int i;
	
	for(i=0;i<5;++i)
	{
		printf("2222\n");
		//break;break����ֹѭ����switch�� 
		return;//ruturn��������ֹѭ���� 
		
	}
	printf("1111\n");
	
 } 
int main(void) 
{
	f();
	
	return 0;
}
