//wap in c to find the number is prime or not?
////#include<stdio.h>
//int main()
//{
//	int i,n,flag=1;
//	printf("enter the value of n:");
//	scanf("%d",&n);
//	for(i=2;i<=n/2;i++)
  //  {
  //  	if(n%i==0)
  //  	{
   // 		flag=0;
    //		break;
	//	}
//	}
//	if (flag==1 && n>1)
//	{
//		printf("prime.");
//	}
//	else
//	{
//		printf("not prime.");
//	}
////	return 0;
//}
//wap in c to swap two numbers without using third variable?
//#include<stdio.h>
////int main()
//{//
//	int a,b;
//	printf("enter the value of a and b:");
//	scanf("%d %d",&a,&b);
//	{
//		a=a+b;
///		b=a-b;
//		a=a-b;
//	}
//	printf("the value of a and b after swap is:%d %d",a,b);
//	return 0;
//}//

//wap in c to find the largest and smallest number in a list of n numbers using dma?
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,max,min;
	int *p;
	printf("enter the value of n:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("enter the elements:");
	for(i=0;i<n;i++)
	scanf("%d",p+i);
		for(i=0;i<n;i++)
		{
			if (*(p+i)>max)
			{
				max=*(p+i);
			}
			if (*(p+i)< min)
			{
				min=*(p+i);
			}
			
		}
		printf("the maximum and minimum value is %d,%d",max,min);
		free(p);
		return 0;
	
}

