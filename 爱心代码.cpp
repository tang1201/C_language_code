#include <stdio.h>
#include <stdlib.h>

void a(int aa)//定义a函数，起到输出空格的作用，让爱心成型 
{
	for(int i = 0;i < aa; i++)
	printf(" ");
}
void b()// 定义b函数，描绘出爱心的轮廓 
{
	printf("*");
}
char c(int cc)//定义一个c函数，作用是输出字符型的  I Love You 
{
	printf("%c",cc);
	return 0;
}

int main()
{
	a(6);b();a(3);b();a(5);b();a(3);b();/*爱心第一行 */
	printf("\n");
	a(4);b();a(8);b();a(8);b();/*爱心第二行*/ 
	printf("\n");
	a(3);b();a(19);b();/*爱心第三行 */
	printf("\n");
	a(3);b();a(4);/*爱心第四行 */
	c(73);a(1);c(76);c(111);c(118);c(101);a(1);c(89);c(111);c(117);/*第四行中用ASCII码输出 I Love You  */ 
	a(5);b();/*爱心第四行*/ 
	printf("\n");
	a(4);b();a(17);b();/*爱心第5行 */
	printf("\n");
	a(6);b();a(13);b();/*爱心第6行*/ 
	printf("\n");
	a(8);b();a(9);b();/*爱心第7行*/ 
	printf("\n");
	a(10);b();a(5);b();/*爱心第8行*/ 
	printf("\n");
	a(13);b();/*爱心第9行*/ 
	printf("\n");
	printf("\n");
	system("pause");	
	return 0;
}
