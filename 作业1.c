#include <stdio.h>



int main(void)
{
	//正三角
	for(int i=1;i<=9;i++)
	{
		for(int j=9;j>=i;j--)
		{
			printf("    ");//4位
		}
		for(int j=1;j<=i;j++)
		{
			printf("%dx%d=%2d  ",i,j,i*j);//8位
		}
		printf("\n");
	}
	printf("\n\n\n");
	//倒三角
	for(int i=9;i>=1;i--)
		{
			for(int j=9;j>=i;j--)
			{
				printf("    ");//4位
			}
			for(int j=1;j<=i;j++)
			{
				printf("%dx%d=%2d  ",i,j,i*j);//8位
			}
			printf("\n");
		}
	return 0;
}
