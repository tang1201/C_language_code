/*
2020��1��28�� 16:05:02 
*/
/*
2020��1��28�� 17:58:37 
*/ 
#include <stdio.h>
int main(void) 
{
	int i ;
	int sum = 0; 
	for(i=1; i<=100; i+=2)
	{
		sum = sum + i ; 
	}
//��һ�����Ƽ� 

//�������Ƽ� 
//	for(i=1; i<=100; ++i)
//	{
//		if(i%2 == 1)
//		sum = sum + i ;
//	}
	printf("sum = %d",sum);
	return 0;
}
