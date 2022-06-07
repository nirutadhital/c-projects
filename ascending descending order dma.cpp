
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,temp,n;
    int*a;
    printf("Enter value of n: ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter value");
    for(i=0;i<n-1;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(a[i]<a[j]);
			
			{
			temp=a[i];
			a[i]=a[j];
			a[i]=temp;
                
            }
            
        }
        
    }
    printf("Ascending order");
    {
	
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
	}
    printf("descending order");
    {
	
    for(i=n-1;i>=0;i--)
    printf("%d",a[i]);
	}	
    free(a);
    return 0;
    
}

