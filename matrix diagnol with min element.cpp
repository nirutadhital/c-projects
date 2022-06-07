#include<stdio.h>
int main()
{
	int a[3][3];
	printf("enter the element for matrix size 3*3\n");
	for(int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		
		}
	}
	int min=a[0][0];
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i==j)
			{
				a[i][j]=min;
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		a[i][i]=min;
		a[i][3-i-1]=min;
	}
	puts("displaying after replacing diagnol with min");
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
	printf("\n");
	}
	return 0;
	
	}
	

