#include <stdio.h>
#include <malloc.h> 

void f(int ** q)
{
	*q = (int *)malloc(sizeof(int));//sizeof（数据类型）返回值是该数据类型返回的字节数
	//等价于p = （int *）malloc（sizeof（int））；
	//q = 5;//error
	//*q = 5;//p = 5;
	**q = 5;//*p = 5; 
}

int main(void)
{
	int * p;
	f(&p);
	printf("%d\n",*p);
	
	return 0;
 } 
