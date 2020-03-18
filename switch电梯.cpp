/*
2020年1月29日 19:52:39
学习switch的用法
break 
*/
#include <stdio.h>
int main(void)
{
	int val;
	
	printf("请输入您要进入的楼层：");
	scanf("%d",&val);
	
	switch (val)
	{
		case 1:
			printf("1层开\n");
			break;
		case 2:
			printf("2层开\n");
			break;
		case 3:
			printf("3层开\n");
			break;
		default:
			printf("错误\n");
			break;
			
	}
	return 0;
 } 
