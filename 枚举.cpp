#include<stdio.h>

//ֻ������һ���������ͣ���û�ж�����������������͵�������  enum WeekDay
enum WeekDay
{
	Monday = 4,TuesDay,WednesDay,ThursDay,Friday,SaturDay,SunDay
};//Ĭ�ϵ�һ��ֵΪ0�� 

int main(void)
{
	//int day;//day�����int���Ͳ�����
	enum WeekDay day =  WednesDay;
	printf("%d\n",day);
	
	return 0;
 } 
