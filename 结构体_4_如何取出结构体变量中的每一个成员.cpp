#include <stdio.h>

struct Student
{
	int age;
	float score;
	char sex;
};//�ֺŲ���ʡ	�����Ƕ�����һ����������	���ֽ�struct Student 

int main(void)
{
	struct Student st = {80,66.6F,'F'};//��ʼ��	�����ͬʱ����ֵ
	struct Student * pst = &st;//&st���ܸĳ�st 
	
	st.score = 66.6f;//��һ�ַ�ʽ 66.6��C������Ĭ����double���ͣ����ϣ��һ��ʵ����float���ͣ��������ĩβ��f��F�����66.6��double��66.6f��66.6F��float���� 
	pst->age = 88;//�ڶ��ַ�ʽ 
	printf("%d %f\n",st.age,pst->score);
	
	return 0;
}
