#include <stdio.h> 

int main(void)
{
	int i = 10;//
	int * p = &i;//
	int ** q = &p;//
	int *** r = &q;//r��int *** ���ͣ�rֻ�ܴ��int **���ͱ����ĵ�ַ
	
	printf("i = %d\n",***r); 
	
	printf("%d %#X %#X %#X",i,p,q,r); 
	
	return 0;
}
