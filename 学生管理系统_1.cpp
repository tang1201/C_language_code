/*
���ʱ�䣺2020��2��6�� 22:26:15
��C������ѧ֪ʶ����Ӧ�� 
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
	
	//��̬�Ĺ���һά���� 
	printf("������ѧ���ĸ�����\n");
	printf("len = ");
	scanf("%d",&len);	
	parr = (struct Student *)malloc(len * sizeof(struct Student));
	
	//���� 
	for (i = 0;i<len;++i)
	{
		printf("��%d��ѧ������Ϣ�ǣ�\n",i+1);
		printf("age=");
		scanf("%d",&parr[i].age);
		
		printf("name = ");
		scanf("%s",parr[i].name);//name����������������Ѿ���������Ԫ�صĵ�ַ������parr[i].name���ܸĳ�&parr[i].name
		
		 printf("score = ");
		 scanf("%f",&parr[i].score); 
	}
	
	//��ѧ���ɼ��������� ð���㷨 
	for(i=0;i<len-i;++i)
	{
		for(j = 0;j<len-1-i;++j)
		{
			if(parr[j].score > parr[j+1].score)//	> ����	< ���� 
			{
				t = parr[j];
				parr[j] = parr[j+1];
				parr[j+1] = t;
			}
		}
	}
	
	printf("\n\nѧ������Ϣ�ǣ�\n"); 
	
	//��� 
	for (i = 0;i<len;++i)
	{
		printf("��%d��ѧ������Ϣ�ǣ�\n",i+1);
		printf("age = %d\n",parr[i].age);
		printf("name = %s\n",parr[i].name);
		 printf("score = %f\n",parr[i].score); 
		 
		 printf("\n");
	}
	
	return 0;
 } 
