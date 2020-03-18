#include <stdio.h>
int main()
{
	int a[2],b[2],x=0,x1;
	printf ("输入一个时间，先小时，后分钟。\n");
		scanf ("%d %d",&a[0],&a[1]);
	printf ("输入一个时间，先小时，后分钟。\n");
		scanf ("%d %d",&b[0],&b[1]);
     x1=a[0]*60-b[0]*60;
	 if(x1<0)
	 {
		 x1=b[0]*60-a[0]*60;
		 x=x1+b[1]-a[1];
		 printf ("两个时间相差x分钟=%d\n",x);
	printf("x=%d\n",x);
	 }
	 else x=x1+a[1]-b[1];
		 printf("两个时间相差x分钟=%d",x);	 
	return 0;

}

