/*
2020��1��30�� 11:50:02
�ع�continue�Լ�do����while
��Ҫ��continue 
*/
#include <stdio.h>

int main(void)
{
	int i = 0,s = 0;
	
	do
	{
		if(i%2)
		{
			i++;
			continue;//ִ�иò��������whileѭ���ж� 
		}
		i++;
		s+=i;
	}while(i < 5);
	
	printf("%d\n",s);
	
	return 0;
 } 
