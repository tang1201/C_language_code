#include <stdio.h>
#include <stdlib.h>

void a(int aa)//����a������������ո�����ã��ð��ĳ��� 
{
	for(int i = 0;i < aa; i++)
	printf(" ");
}
void b()// ����b�������������ĵ����� 
{
	printf("*");
}
char c(int cc)//����һ��c����������������ַ��͵�  I Love You 
{
	printf("%c",cc);
	return 0;
}

int main()
{
	a(6);b();a(3);b();a(5);b();a(3);b();/*���ĵ�һ�� */
	printf("\n");
	a(4);b();a(8);b();a(8);b();/*���ĵڶ���*/ 
	printf("\n");
	a(3);b();a(19);b();/*���ĵ����� */
	printf("\n");
	a(3);b();a(4);/*���ĵ����� */
	c(73);a(1);c(76);c(111);c(118);c(101);a(1);c(89);c(111);c(117);/*����������ASCII����� I Love You  */ 
	a(5);b();/*���ĵ�����*/ 
	printf("\n");
	a(4);b();a(17);b();/*���ĵ�5�� */
	printf("\n");
	a(6);b();a(13);b();/*���ĵ�6��*/ 
	printf("\n");
	a(8);b();a(9);b();/*���ĵ�7��*/ 
	printf("\n");
	a(10);b();a(5);b();/*���ĵ�8��*/ 
	printf("\n");
	a(13);b();/*���ĵ�9��*/ 
	printf("\n");
	printf("\n");
	system("pause");	
	return 0;
}
