/*
函数声明
*/
#include <stdio.h>

void f(void);//函数声明，分号不能丢掉
//void f(int);//error,因为下面是 f() 

int main(void)
{
	f();
	
	return 0;
}
void f(void)//没形参括号里也得写void 
{
	printf("!!!\n");
}
