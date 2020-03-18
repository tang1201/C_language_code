/*
2020年1月31日 21:21:00 
108
*/
#include<stdio.h>

int f()
{
	return 10.5;//因为函数返回值的类型为int 所以最终f返回的是10而不是10.5 
}

int main(void)
{
	int i = 99;
	double x = 6.6;
	
	x = f();
	printf("%lf\n",x);
	
	return 0;
}
/*
函数类型以定义函数的数据类型决定 
*/
