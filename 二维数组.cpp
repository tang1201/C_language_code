/*
2020年1月31日 09:26:02
输出数组内容 
*/ 
#include <stdio.h>
int main(void)
{
	int a[3][4] = { 
	{1,  2,  3,  4},
	{5,  6,  7,  8},
	{9, 10, 11, 12}
	};
	int i,j;
	
	for(i=0; i<3; ++i)
	{
		for(j=0; j<4; ++j) 
		printf("%-5d ",a[i][j]);//-5d中-表示左对齐，5表示5个光标的位置 
		printf("\n");//控制格式 
	}

	return 0;
}
