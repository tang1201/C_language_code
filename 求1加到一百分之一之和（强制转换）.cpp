/*
2020��1��27�� 22:19:57
 1+1/2+1/3+����+1/100
  ѧϰǿ������ת�� 
*/ 
#include <stdio.h>

int main(void)
{
	float i;//����������򸡵����洢�����������⣬Ӧ�� 
	//ǿ������ת��	int i; 
	float sum = 0 ;
	
	for(i=1;i<=100;++i)
	{
		sum = sum + 1/i;//
						//ǿ������ת��  sum = sum + 1/(float)(i)	�Ƽ� 
						//			    sum = sum + (float)(1/i)����д�Ǵ����
						//���򵥵�д��	sum = sum + 1.0/i	 ���Ƽ� 
	 } 
	
	printf("sum = %f\n",sum);
	
	return 0;
}
