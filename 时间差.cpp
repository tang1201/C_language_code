#include <stdio.h>
int main()
{
	int a[2],b[2],x=0,x1;
	printf ("����һ��ʱ�䣬��Сʱ������ӡ�\n");
		scanf ("%d %d",&a[0],&a[1]);
	printf ("����һ��ʱ�䣬��Сʱ������ӡ�\n");
		scanf ("%d %d",&b[0],&b[1]);
     x1=a[0]*60-b[0]*60;
	 if(x1<0)
	 {
		 x1=b[0]*60-a[0]*60;
		 x=x1+b[1]-a[1];
		 printf ("����ʱ�����x����=%d\n",x);
	printf("x=%d\n",x);
	 }
	 else x=x1+a[1]-b[1];
		 printf("����ʱ�����x����=%d",x);	 
	return 0;

}

