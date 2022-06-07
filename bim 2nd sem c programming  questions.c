//2)write a program to display all numbers from 100 to 200 which are exactly divisible by 5.
//#include<stdio.h>
//int main()
//{
//int i,sum=0;
//printf("enter the number between 100 and 200\n");
//for(i=101;i<200;i++)
//{
//if(i%5==0)
//{
//printf("%5d\n",i);
//}
//}
//return 0;
//}

//3) create a function void check (int n) that check whether given number is positive,negative or neutral.
//#include<stdio.h>
//void check(int);
//void main()
//{
//    int n;
//    printf("enter any number:");
//    scanf("%d",&n);
//   check(n);
//}
//void check (int n)
//{
//
//if(n==0)
//     printf("the %d is neutral",n);
//if(n>0)
//   printf("the %d is positive",n);
//if(n<0)
//    printf("the %d is negative",n);
//}

//4) write a program to input 10 numbers in an array and display the sum.
//#include<stdio.h>
//int main()
//{
//
//    int a[10],sum=0;
//    printf("enter any 10 numbers in an array:");
//    for(int i=0;i<10;i++)
//        scanf("%d",&a[i]);
//    for(int i=0;i<10;i++)
//    {
//        sum=sum+a[i];
//    }
//    printf("%d",sum);
//    return 0;
//}

//5) write a program that uses nested for loop
//#include<stdio.h>
//int main()
//{
//
//    int i,j;
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5;j++)
//            printf("*");
//        printf("\n");
//    }
//    return 0;
//}

//7) write  a program to swap two numbers
//#include<stdio.h>
//int main()
//{
//
//    int a,b,temp;
//    printf("enter the value of a and b");
//    scanf("%d %d",&a,&b);
//    temp=a;
//    a=b;
//    b=temp;
//    printf("the value after swap is %d %d",a,b);
//    return 0;
//}


//8) write a program to input a string and count the number of characters without using strlen() function
//#include<stdio.h>
//int main()
//{
//
//    char str[150];
//    int count=0;
//    gets(str);
//    for(int i=0; str[i]!='\0';i++)
//    {
//        count++;
//    }
//    printf("the number of characters are %d",count);
//    return 0;
//}
