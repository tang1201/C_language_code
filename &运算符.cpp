#include <stdio.h>

int main(void)
{
	int i = 5;//0101
	int j = 7;//0111
	int k;
	
	k = i&j;//0101
	printf("%d\n",k);
	
	k = i && j;//k��ֵֻ����1��0	��Ϊ&&���߼���������߼�������Ľ��ֻ�������٣���Ϊ1��Ϊ0 
	printf("%d\n",k);
	
	return 0;
 } 
 
 /*
 �����	5	1 
 */
