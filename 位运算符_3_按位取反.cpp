#include <stdio.h>

int main(void)
{
	int i = 3;//00000000����	0011
	int k; 
	
	k = ~i;//11111111����	1100 ����>	- (3+1)����> -4 
	printf("%d\n",k);
	
	return 0;
 } 
 /*
 ����� -4
 �������Ϊ ~i�ȼ��� -(i+1) 
 ��i���� -3ʱ��k=2 
 */
