/*
2020��2��3�� 21:54:37
 
*/

#include <stdio.h>

void f(int * parr,int len)
{
	int i;
	for(i = 0; i<len; ++i) 
	printf("%d  ",*(parr+i));//*(parr+i)�ȼ���parr[i]Ҳ�ȼ���b[i]Ҳ�ȼ���*��b+i) 
	printf("\n"); 
}

int main(void)
{
	int a[5] = {1,2,3,4,5};
	int b[6] = {-1,-2,-3,4,5,-6};
	int c[100] = {1,99,22,33};
	
	f(a,5); // a�� int *	5��������Ԫ�صĸ��� 
	f(b,6);
	f(c,100);
	
	return 0;
 } 
