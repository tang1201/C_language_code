/*
2020��1��31�� 22:25:00 
�ж�һ�����Ƿ�Ϊ���� 
111
*/
#include <stdio.h>

bool IsPrime(int val)//boolֻ��true��false���� 
{
	int i;
	
	for(i=2;i<val;++i)
	{
		if(val%i == 0)
			break;
	}
	if(i == val)
		return true;
	else
		return false;
	
	
	
}
int main(void)
{
	int val;
	int i;
	
	scanf("%d",&val);
	if (IsPrime(val))
		printf("Yes!\n");
	else
		printf("No!\n");
/*	for(i=2;i<val;++i)
	{
		if(val%i == 0)
			break;
	}
	if(i == val)
	return true;
	//	printf("Yes!\n");
	else
	return false;
	//	printf("No!\n");
*/
	return 0;
 } 
