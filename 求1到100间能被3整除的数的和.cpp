/*
2020年1月27日 21:36:38
求1到100间能被3整除的数字之和 
*/
#include <stdio.h>

int main(void)
{
	int i;
	int sum=0;
	
	for(i=3; i<=100; ++i)
	{
		if(i%3 == 0)
		sum = sum + i;
		
	}
	printf("sum=%d\n",sum);
	
	
	return 0;
}
