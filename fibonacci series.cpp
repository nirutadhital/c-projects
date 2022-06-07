#include <stdio.h>

int main() {
    int row=3,col=3,sum=0, sum_s=0;
    int a[row][col];
   
    
    printf("Enter the elements of first array for size %d X %d",row,col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("\na[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    puts("DIsplaying the given matrix1");
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
                sum = sum+a[i][j];
            if(i+j ==row-1)
                sum_s = sum_s+a[i][j];
        }
    }
  printf("THe sum of primary diagonal is %d \nThe sum of secondary diagonal is %d",sum,sum_s);
    return 0;
}


