/*
2020��1��27�� 21:36:38
��1��100���ܱ�3����������֮�� 
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
