/*
2020��1��31�� 21:21:00 
108
*/
#include<stdio.h>

int f()
{
	return 10.5;//��Ϊ��������ֵ������Ϊint ��������f���ص���10������10.5 
}

int main(void)
{
	int i = 99;
	double x = 6.6;
	
	x = f();
	printf("%lf\n",x);
	
	return 0;
}
/*
���������Զ��庯�����������;��� 
*/
