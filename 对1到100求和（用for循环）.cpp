/*
2020年1月27日 20:17:36
1+2+3+……+100 
求1到10里所有的奇数和 	其中i=i+2用i+=2代替 
目的：学习for循环 
*/

#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	
	for(i=1; i<100; ++i)
	//for(i=1; i<=10; i+=2)
	sum = sum + i;
	printf("sum=%d",sum);
	
	return 0;
}
