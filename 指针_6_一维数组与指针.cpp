/*
һ��Ҫ����8�е�parr[3]��14,17�е�a[3]��ͬһ������ 
*/
#include <stdio.h>

void f(int * parr,int len)
{
	parr[3] = 88;
}
int main(void)
{
	int a[6] = {1,2,3,4,5,6};
	//a == &a[0] !=&a[2]��Ϊa�ǳ��� 
	
	printf("%d\n",a[3]);//4
	f(a,6);
	printf("%d\n",a[3]);//88
	
	return 0;
}

