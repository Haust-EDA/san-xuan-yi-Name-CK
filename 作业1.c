#include <stdio.h>



int main(void)
{
	//������
	for(int i=1;i<=9;i++)
	{
		for(int j=9;j>=i;j--)
		{
			printf("    ");//4λ
		}
		for(int j=1;j<=i;j++)
		{
			printf("%dx%d=%2d  ",i,j,i*j);//8λ
		}
		printf("\n");
	}
	printf("\n\n\n");
	//������
	for(int i=9;i>=1;i--)
		{
			for(int j=9;j>=i;j--)
			{
				printf("    ");//4λ
			}
			for(int j=1;j<=i;j++)
			{
				printf("%dx%d=%2d  ",i,j,i*j);//8λ
			}
			printf("\n");
		}
	return 0;
}
