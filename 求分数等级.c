/*
2020年1月27日 10:34:51
目的：自己写一个用IF的小程序 
出错点：使用了中文分号 
		输入小于零和大于100的数字会出现最棒字样
		纠错：在小于零和大于100间应该用或|| 并且等于应该用==单独一个=为赋值 
*/
#include <stdio.h>
int main(void)
{
	float i;
	
	printf("请输入分数："); 
	
	scanf("%f",&i);
	
	if(i<60&&i>=0)
		printf("不及格");
	else if(i>=60&&i<70)
		printf("合格");
	else if(i>=70&&i<80)
		printf("良好");
	else if(i>=80&&i<100)
		printf("优秀");
	else if(i==100) 
		printf("最棒！");
	else if(i<0||i>100)
		printf("输入有误，请重新输入：");

	return 0; 
	
 } 
