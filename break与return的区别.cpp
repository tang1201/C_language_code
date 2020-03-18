/*

*/
#include<stdio.h>

void f(void)
{
	int i;
	
	for(i=0;i<5;++i)
	{
		printf("2222\n");
		//break;break是终止循环和switch的 
		return;//ruturn是用来终止循环的 
		
	}
	printf("1111\n");
	
 } 
int main(void) 
{
	f();
	
	return 0;
}
