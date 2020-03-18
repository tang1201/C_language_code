/*
求1到某个数字之间的所有素数 
用一个函数来判断一个数字是否是素数
		优点：代码的可读性较不用函数的程序更强
		代码的重复利用性也更高
		缺点：可重用性任然不是非常高
		比如 求1000个数字，每个数字从1到它本身的素数 
		则 
		for(i = 2;i<val;++i)
	{
		if(IsPrime(i))
		printf("%d\n",i); 
	}
	要写1000次 
*/
#include <stdio.h>

bool IsPrime(int m)
{
	int i;
	for (i = 2;i<m;++i)
	{
		if(0 == m%i)
		break;
	}
	if (i == m)
	return true;
	else
	return false;
 } 

int main(void)
{
	int val;
	int i;
	
	scanf("%d",&val);
	for(i = 2;i<val;++i)
	{
		if(IsPrime(i))
		printf("%d\n",i); 
	}
	
	
	return 0;
 } 
