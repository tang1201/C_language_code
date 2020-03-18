/*
2020年2月6日 19:14:54
通过函数完成对结构体变量的输入和输出
发送地址还是发送内容 
指针的优点之一：
	快速传递数据 
	耗用内存小
	执行速度快 
*/
#include <stdio.h>
#include <string.h>//调用strcpy函数所要用到的头文件 

void InputStudent(struct Student *);
//void OutputStudent(struct Student);
void OutputStudent(struct Student *);
 
struct Student
{
	int age;
	char sex;
	char name[100];
};//分号不能省 

int main(void)
{
	struct Student st;
	printf("%d\n",sizeof(st)); 
	
	InputStudent(&st);//对结构体变量输入 必须发送st的地址
	//OutputStudent(st);//对结构体变量输出 可以发送st的地址也可以直接发送st的内容 但为了减少内存的耗费，也为了提高执行速度,推荐发送地址 
	OutputStudent(&st);
	
	return 0;
 } 
 
 /*
 void OutputStudent(struct Student ss)
 {
 	printf("%d %c %s\n",ss.age,ss.sex,ss.name);
  } 
  */
  void OutputStudent(struct Student *pst)
 {
 	printf("%d %c %s\n",pst->age,pst->sex,pst->name);
  } 
  
void InputStudent(struct Student * pstu)//pstu只占4个字节
{
	(*pstu).age = 10;
	strcpy(pstu->name,"张三");
	pstu->sex = 'F'; 
 } 
