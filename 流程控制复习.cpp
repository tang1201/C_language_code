/*
2020年1月30日 11:50:02
回顾continue以及do……while
主要是continue 
*/
#include <stdio.h>

int main(void)
{
	int i = 0,s = 0;
	
	do
	{
		if(i%2)
		{
			i++;
			continue;//执行该步骤会跳往while循环判断 
		}
		i++;
		s+=i;
	}while(i < 5);
	
	printf("%d\n",s);
	
	return 0;
 } 
