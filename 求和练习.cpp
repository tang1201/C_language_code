/*
2020年1月28日 16:05:02 
*/
/*
2020年1月28日 17:58:37 
*/ 
#include <stdio.h>
int main(void) 
{
	int i ;
	int sum = 0; 
	for(i=1; i<=100; i+=2)
	{
		sum = sum + i ; 
	}
//法一；不推荐 

//法二；推荐 
//	for(i=1; i<=100; ++i)
//	{
//		if(i%2 == 1)
//		sum = sum + i ;
//	}
	printf("sum = %d",sum);
	return 0;
}
