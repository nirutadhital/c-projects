#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,temp,n;
	int *p;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	p=(int*)malloc (n*sizeof(int));
	printf("enter the elements:");
	for(i=0;i<n;i++)
	scanf("%d",p+i);
	for(i=0;i<n;i++)
	{
		
			if (*(p+i)>*p)
			{
				*p=*(p+i);
			}

	}
	printf("maximum value is:");

	printf("%d\n",*p);
	free(p);
	return 0;
	}
