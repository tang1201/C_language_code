/*
2020年2月3日 21:54:37
 
*/

#include <stdio.h>

void f(int * parr,int len)
{
	int i;
	for(i = 0; i<len; ++i) 
	printf("%d  ",*(parr+i));//*(parr+i)等价于parr[i]也等价于b[i]也等价于*（b+i) 
	printf("\n"); 
}

int main(void)
{
	int a[5] = {1,2,3,4,5};
	int b[6] = {-1,-2,-3,4,5,-6};
	int c[100] = {1,99,22,33};
	
	f(a,5); // a是 int *	5是数组里元素的个数 
	f(b,6);
	f(c,100);
	
	return 0;
 } 
