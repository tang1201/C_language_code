#include <stdio.h>

void f(int ** q)//q�Ǹ�ָ�����������q��ʲô���͵�ָ���������ֻռ4���ֽ� 
{
	int i = 5;
	//*q�ȼ���p		q��**q�����ȼ���p
	*q = &i;  //p = &i; 
}

int main(void)
{
	int *p;
	f(&p);
	printf("%d\n",*p);//������﷨û�����⣬���߼��������� 
	
	return 0;
}
