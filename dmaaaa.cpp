//wap in c to arrange the nmber ascending order using DMA.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n, temp;
	int *p;
	printf("enter the value of n:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",p+i);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i)>*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	printf("ascending order:");
	for(i=0;i<n;i++)
	printf("%d\n",*(p+i));
	free(p);
	return 0;

}
 
