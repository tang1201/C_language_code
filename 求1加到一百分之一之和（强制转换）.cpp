/*
2020年1月27日 22:19:57
 1+1/2+1/3+……+1/100
  学习强制类型转化 
*/ 
#include <stdio.h>

int main(void)
{
	float i;//这样会带来因浮点数存储所带来的问题，应该 
	//强制类型转换	int i; 
	float sum = 0 ;
	
	for(i=1;i<=100;++i)
	{
		sum = sum + 1/i;//
						//强制类型转换  sum = sum + 1/(float)(i)	推荐 
						//			    sum = sum + (float)(1/i)这样写是错误的
						//更简单的写法	sum = sum + 1.0/i	 不推荐 
	 } 
	
	printf("sum = %f\n",sum);
	
	return 0;
}
