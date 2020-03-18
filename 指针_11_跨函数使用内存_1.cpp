#include <stdio.h>

void f(int ** q)//q是个指针变量，无论q是什么类型的指针变量，都只占4个字节 
{
	int i = 5;
	//*q等价于p		q和**q都不等价于p
	*q = &i;  //p = &i; 
}

int main(void)
{
	int *p;
	f(&p);
	printf("%d\n",*p);//本语句语法没有问题，但逻辑上有问题 
	
	return 0;
}
