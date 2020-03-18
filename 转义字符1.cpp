 #include "stdio.h"
 main ()
 { 
	int a;
	float b,c;
	double e,f;
	char x; 
	a=100;
	b=123.4578912345;c=-0.00012;
	e=-123.345;f=1234.34654321;
	x='A';
	printf("%d\t%f\t%f\t%lf\t%lf\t%c\n",a,b,c,e,f,x);
	printf("%c\t%E\t%e\t%f\t%e\t%d\n",a,b,c,e,f,x);
}
