#include <stdio.h>

int main(void)
{
	int i = 5;//0101
	int j = 7;//0111
	int k;
	
	k = i&j;//0101
	printf("%d\n",k);
	
	k = i && j;//k的值只能是1或0	因为&&是逻辑运算符，逻辑运算符的结果只能是真或假，真为1假为0 
	printf("%d\n",k);
	
	return 0;
 } 
 
 /*
 结果是	5	1 
 */
