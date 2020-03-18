/*
2020年1月29日 09:37:49
将while与for进行对比 
*/
#include <stdio.h>

int main(void)

{
	int i = 1;
	int sum = 0;
	while(i <= 100)
	{
		sum = sum + i;
		++i;
	}
	printf("sum = %d\n",sum);
	 return 0;
 }	 
