#include<stdio.h>
int main()
{
	int i,j;
	char word[]="Hetauda";
	for(i=0;i<7;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c\t",word[i]);
		}
		printf("\n");
	}
	return 0;
}
