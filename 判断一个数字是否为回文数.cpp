/*
学习如何看懂一个程序_1
2020年1月29日 09:57:35 
*/ 
#include <stdio.h>

int main(void)
{
	int val;//存放待判断的数字
	int m;
	int sum = 0;
	
	printf("请输入您需要判断的数字：");
	scanf("%d",&val);
	
	m = val; 
	while (m)
	{
		sum = sum * 10 + m%10;
		m /= 10;
	}
	if (sum == val)
	printf("yes!\n");
	else
	printf("no!\n");
	
	return 0;
}
/*
————————————————
收获：
 
while (m)
	{
		sum = sum * 10 + m%10;
		m /= 10;
	}
	
该循环的功能是将数字倒过来
例如将1234变成4321 
———————————————— 
*/
