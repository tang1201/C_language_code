/*
2020��1��27�� 20:17:36
1+2+3+����+100 
��1��10�����е������� 	����i=i+2��i+=2���� 
Ŀ�ģ�ѧϰforѭ�� 
*/

#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	
	for(i=1; i<100; ++i)
	//for(i=1; i<=10; i+=2)
	sum = sum + i;
	printf("sum=%d",sum);
	
	return 0;
}
