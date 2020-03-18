/*排序  
2020年1月27日 15:08:27
还是有些糊涂，来源郝斌C语言59集 

*/
#include <stdio.h>

int main(void)
{
	int a,b,c,t;
	
	printf("请输入三个整数，中间以空格分隔：");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	 if(a<c)
	 {
	 	t=a;
	 	a=c;
	 	c=t; 
	 }
	 if(b<c)
	 {
	 	t=b;
	 	b=c;
	 	c=t;
	 }
	printf("%d %d %d\n",a,b,c);
	
	return 0;
 } 
