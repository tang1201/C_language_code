/*
2020Äê1ÔÂ31ÈÕ 21:51:51
 
*/
#include <stdio.h>

void max1(int i,int j)
{
	if(i>j)
	printf("%d\n",i);
	else
	printf("%d\n",j);
}
int max2(int i,int j)
{
	if(i>j)
	return i;
	else
	return j;
}
int main(void)
{
	int a,b,c,d,e,f;
	a = 1,b = 2,c = 3,d = 9,e = -5,f = 100;
	
/*	printf("%d\n",max2(a,b));
	printf("%d\n",max2(c,d));
	printf("%d\n",max2(e,f));
*/	
	max1(a,b);
	max1(c,d);
	max1(e,f);
	
	return 0;
}
 
