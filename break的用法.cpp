/*
2020年1月29日 20:59:35
学习break 
*/ 
#include <stdio.h>
int main(void)
{
	int i;
	
	for(i=0;i<3;++i)
	{
		if (3>2)
		break;//break虽然是IF内部的语句，但break终止的却是外部的for循环 
		printf("shuchu\n");
	}
	
	return 0;
 } 
 /*
 ————————————————————
 该程序不会输出
 原因是break终止了for循环 
 ———————————————————— 
 */
