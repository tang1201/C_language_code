/*
经典指针程序： 
互换两个数字
 127
*/
#include <stdio.h>

//函数声明时一般不写形参 	void huhuan(int *,int *)

void huhuan(int * p,int * q)//形参名字是p和q，接收实参是数据的是p和 
{
	int t;//如果要互换p，q的值，则t必须是int *，不能是int，否则会出错 
		  //如果要互换*p和*q的值，则t必须是int，不能是int *	否则会出错 
	
	 t = * p;//p是int * 	* p是int 
	* p = * q;
	* q = t; 

	return;
}

int main(void)
{
	int a = 3;
	int b = 5;
	
	 
	 
	huhuan(&a ,&b);
	printf("a = %d,b = %d",a,b);
	
	return 0;
}
