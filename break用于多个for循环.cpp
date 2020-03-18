/*
2020年1月29日 21:30:53 
*/
# include <stdio.h>
int main(void)
{
	int i,j;
	
	for(i=0; i<3;++i)
	{
		for(j=1;j<4;++j)
			break;//break只能终止距离它最近的循环 
		printf("shuchu\n");
	}
	return 0;
}
