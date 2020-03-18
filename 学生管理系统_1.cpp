/*
完成时间：2020年2月6日 22:26:15
对C语言所学知识进行应用 
*/ 
#include <stdio.h>
#include <malloc.h>

struct Student
{
	int age;
	float score;
	char name[100];
};

int main(void)
{
	int len;
	struct Student * parr;
	int i,j;
	struct Student t;
	
	//动态的构造一维数组 
	printf("请输入学生的个数：\n");
	printf("len = ");
	scanf("%d",&len);	
	parr = (struct Student *)malloc(len * sizeof(struct Student));
	
	//输入 
	for (i = 0;i<len;++i)
	{
		printf("第%d个学生的信息是：\n",i+1);
		printf("age=");
		scanf("%d",&parr[i].age);
		
		printf("name = ");
		scanf("%s",parr[i].name);//name是数组名，本身就已经是数组首元素的地址，所以parr[i].name不能改成&parr[i].name
		
		 printf("score = ");
		 scanf("%f",&parr[i].score); 
	}
	
	//按学生成绩升序排序 冒泡算法 
	for(i=0;i<len-i;++i)
	{
		for(j = 0;j<len-1-i;++j)
		{
			if(parr[j].score > parr[j+1].score)//	> 升序	< 降序 
			{
				t = parr[j];
				parr[j] = parr[j+1];
				parr[j+1] = t;
			}
		}
	}
	
	printf("\n\n学生的信息是：\n"); 
	
	//输出 
	for (i = 0;i<len;++i)
	{
		printf("第%d个学生的信息是：\n",i+1);
		printf("age = %d\n",parr[i].age);
		printf("name = %s\n",parr[i].name);
		 printf("score = %f\n",parr[i].score); 
		 
		 printf("\n");
	}
	
	return 0;
 } 
