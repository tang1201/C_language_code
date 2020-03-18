/*
2020年1月31日 10:34:51
 
*/
#include <stdio.h>

void max(int i,int j)//max是函数的名字，i和j是形式参数，简称形参 ，void表示函数没有返回值 
{
	if(i>j)
	printf("%d\n",i);
	else
	printf("%d\n",j);
 } 
 
 int main(void)
{
	int a,b,c,d,e,f;
	
	a=1,b=2,c=3,d=9,e=-5,f=100;
	max(a,b); 
	max(c,d);
	max(e,f);
	
	return 0;
 } 
