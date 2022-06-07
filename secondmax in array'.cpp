#include<stdio.h>
#include<limits.h>
 
int main()
{
  int n, array[20],max,secondmax;
 
  printf("Enter the size: ");
  scanf("%d",&n);
 
  printf("Enter the elements: ");
  for(int i=0; i<n; i++){
    scanf("%d",&array[i]);
  }
    
    
  for(int i=0; i<n; i++){
    
    if(array[i]>max){
      secondmax = max;
      max = array[i];
    }
    
    
    else if(array[i]<max && array[i]>secondmax){
      secondmax = array[i];
    }
  }
 
  printf("Second largest element is %d",secondmax);
 
  return 0;
}
