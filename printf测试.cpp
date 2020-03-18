/*
2020年1月26日 20:16:37
目的：观察输出控制符的不同 
*/ 
#include <stdio.h>
int main(void)
{
	int i = 1000;
	printf("%x\n",i); 
	printf("%X\n",i);
	printf("%#x\n",i);
	printf("%#X",i);//最优 
	return 0;																				
 } 
