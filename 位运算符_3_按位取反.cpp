#include <stdio.h>

int main(void)
{
	int i = 3;//00000000……	0011
	int k; 
	
	k = ~i;//11111111……	1100 ——>	- (3+1)——> -4 
	printf("%d\n",k);
	
	return 0;
 } 
 /*
 结果是 -4
 可以理解为 ~i等价于 -(i+1) 
 当i等于 -3时，k=2 
 */
