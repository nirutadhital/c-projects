#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int n;
FILE *fp;
FILE *fp1;
fp=fopen("even.txt","wb");
fp1=fopen("odd.txt","wb");
if(fp==NULL && fp1==NULL)
{
printf("error!");
exit(1);
}
printf("enter the value of n:");
scanf("%d",&n);



for(int i=1; i<=n;i++)
{
if (i%2==0)
putw(i,fp);
else
putw(i,fp1);
}
printf("records added successfully:");
fclose(fp);
fclose(fp1);
fp=fopen("even.txt","rb");
int ch;
while((ch=getw(fp))!=EOF)
{
printf("%d\n",ch);
}
fclose(fp);
return 0;




}
