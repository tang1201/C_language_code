#include <stdio.h>
#include<malloc.h>

int main(void)
{
	int a[5];//���intռ44���ֽڵĻ����������ܹ�������20���ֽڣ�ÿ4���ֽڱ�������һ��int ������ʹ�� 
	int len;
	int * parr;
	int i;
 
	//��̬����һά���� 
	printf("��������Ҫ��ŵ�Ԫ�ظ�����");
	scanf("%d",&len);
	parr = (int *)malloc(4*len);//���ж�̬�Ĺ�����һ��һά���飬��������Ϊparr���������ÿ��Ԫ����int���� ������int parr[len]��
	 
	 //��һά������в��� 
	 //�Զ�̬һά������и�ֵ 
	for(i=0;i<len;++i)
	{
	scanf("%d",&parr[i]);
	 }
	 
	 //��һά����������
	 printf("һά����������ǣ�\n"); 
	 for(i=0;i<len;++i)
	 printf("%d\n",parr[i]);	
	 
	 free(parr);//�ͷŵ���̬���������	 
		 
	return 0; 
}
