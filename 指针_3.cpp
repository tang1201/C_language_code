/*
指针常见错误
2020年2月2日 21:22:03
 
*/
#include<stdio.h>

int main(void)
{
	int *p;
	int i = 5;	//*p = i;//错误	1 	printf("%d\n",*p);			只能p=&i; 
	int * q;
	 
	p = &i;
	//*q = p;//error *q是int型而p是int *型	语法编译会出错	错误2 
	//*q = *p;//error 
	p = q;//q是垃圾值，q赋给p，p也边垃圾值 
	
	printf("%d\n",*q);//q的空间是属于本程序的，所以本程序可以读写q的内容，
	//但是如果q的内部是垃圾值，则本程序不能读写*q的内容，
	//因为*q所代表的内存单元的控制权限并没有分配给本程序 
	
	return 0;
 } 
