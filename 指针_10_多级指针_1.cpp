#include <stdio.h> 

int main(void)
{
	int i = 10;//
	int * p = &i;//
	int ** q = &p;//
	int *** r = &q;//r是int *** 类型，r只能存放int **类型变量的地址
	
	printf("i = %d\n",***r); 
	
	printf("%d %#X %#X %#X",i,p,q,r); 
	
	return 0;
}
