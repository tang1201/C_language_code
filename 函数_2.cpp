/*
2020年1月31日 16:21:20
函数2 
*/
#include <stdio.h>

int f(void)//括号中的void表示该函数不能接收数据 
{
	return 10;//向主调函数返回10 
 } 
 void g(void)
 {
 //	return 10;//error 与11行行首的void相矛盾  
 }
int main(void)//main是主函数 
{
	int j = 88;
	
	j = f();
	printf("%d\n",j);
	
	j = g(); 
	return 0;
 } 
