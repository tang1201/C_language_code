/*
一定要明白8行的parr[3]和14,17行的a[3]是同一个变量 
*/
#include <stdio.h>

void f(int * parr,int len)
{
	parr[3] = 88;
}
int main(void)
{
	int a[6] = {1,2,3,4,5,6};
	//a == &a[0] !=&a[2]因为a是常量 
	
	printf("%d\n",a[3]);//4
	f(a,6);
	printf("%d\n",a[3]);//88
	
	return 0;
}

