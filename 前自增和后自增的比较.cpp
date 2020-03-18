/*
2020年1月28日 20:11:43 
*/
#include <stdio.h>
int main(void)
{
	int i,j,k,m;
	i = j = 3;
	k = i++;
	m = ++j;
	
	printf("i=%d,j=%d,k=%d,m=%d",i,j,k,m); 
	
	return 0;
}
/*
输出结果
————————————
 i=4;j=4;k=3;m=4
————————————
总结：	i++是指k=i(3)	i=i+1=4
		++j是指m=j+1=4	j=j+1=4
		也就是说前自增才能将+1的结果赋给等式左边 
*/ 
