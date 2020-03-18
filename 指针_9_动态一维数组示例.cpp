#include <stdio.h>
#include<malloc.h>

int main(void)
{
	int a[5];//如果int占44个字节的话，则本数组总共包含有20个字节，每4个字节被当作了一个int 变量来使用 
	int len;
	int * parr;
	int i;
 
	//动态构造一维数组 
	printf("请输入你要存放的元素个数：");
	scanf("%d",&len);
	parr = (int *)malloc(4*len);//本行动态的构造了一个一维数组，该数组名为parr，该数组的每个元素是int类型 类似于int parr[len]；
	 
	 //对一维数组进行操作 
	 //对动态一维数组进行赋值 
	for(i=0;i<len;++i)
	{
	scanf("%d",&parr[i]);
	 }
	 
	 //对一维数组进行输出
	 printf("一维数组的内容是：\n"); 
	 for(i=0;i<len;++i)
	 printf("%d\n",parr[i]);	
	 
	 free(parr);//释放掉动态分配的数组	 
		 
	return 0; 
}
