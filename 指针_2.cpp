/*
初识指针——2
2020年2月2日 19:41:56 
*/
#include <stdio.h>

int main(void)
{
	
	int * p;//p是变量的名字，int * 表示p变量存放的是int类型变量的地址
			//int * p；不表示定义了一个叫*p的变量
			//int * p；应该这样理解：p是变量名，p变量的数据类型是 int *类型
			//		所谓int *类型 实际就是存放int变量地址的类型 
	int i = 3;
	int j; 
	
	p = &i;
	/*
		1.p保存了i的地址，因此p指向i
		2.p不是i，i也不是p，更准确地说：修改p的值不影响i的值，修改i的值也不影响p的值
		3.如果一个指针变量指向了某个普通变量，则
			*指针变量	就完全等同于	普通变量 
		例子：
			如果p是个指针变量，并且p存放了普通变量i的地址
			则p指向了普通变量i
			*p	就完全等同于 i
			或者说： 在所以出现*p的地方都可以替换成i
					 在所有出现i的地方都可以替换成*p 
			*p就是以p的内容为地址的变量 
	*/ 
	j = *p;
	printf("i = %d,j = %d",i,j);
	return 0;
}
/*
指针就是地址，地址就是指针
地址就是内存单元的编号
指针变量是存放地址的变量
指针和指针变量是两个不同的概念 
但是要注意，通常我们叙述时会把指针变量简称为指针，实际它们的含义并不一样 
*/
