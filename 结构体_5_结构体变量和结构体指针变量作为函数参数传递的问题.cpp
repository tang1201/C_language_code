/*
2020��2��6�� 19:14:54
ͨ��������ɶԽṹ���������������
���͵�ַ���Ƿ������� 
ָ����ŵ�֮һ��
	���ٴ������� 
	�����ڴ�С
	ִ���ٶȿ� 
*/
#include <stdio.h>
#include <string.h>//����strcpy������Ҫ�õ���ͷ�ļ� 

void InputStudent(struct Student *);
//void OutputStudent(struct Student);
void OutputStudent(struct Student *);
 
struct Student
{
	int age;
	char sex;
	char name[100];
};//�ֺŲ���ʡ 

int main(void)
{
	struct Student st;
	printf("%d\n",sizeof(st)); 
	
	InputStudent(&st);//�Խṹ��������� ���뷢��st�ĵ�ַ
	//OutputStudent(st);//�Խṹ�������� ���Է���st�ĵ�ַҲ����ֱ�ӷ���st������ ��Ϊ�˼����ڴ�ĺķѣ�ҲΪ�����ִ���ٶ�,�Ƽ����͵�ַ 
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
  
void InputStudent(struct Student * pstu)//pstuֻռ4���ֽ�
{
	(*pstu).age = 10;
	strcpy(pstu->name,"����");
	pstu->sex = 'F'; 
 } 
