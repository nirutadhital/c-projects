#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct employee
{
	char name[20];
	int age;
	long int cell_phone;
	int employee_id;
	char address[20];
}e[3],e1;
int main()
{
	FILE *fp;
	fp=fopen("bca.txt","wb");
	if(fp==NULL)
	{
		printf("error!");
		exit(1);
	}
	for(int i=0;i<3;i++)
	{
		printf("enter the records of employee-%d\n",i+1);
		puts("enter the name:");
		gets(e[i].name);
		puts("enter the age:");
		scanf("%d",&e[i].age);
		puts("enter the cell phone number:");
		scanf("%ld",&e[i].cell_phone);
		puts("enter the employee id:");
		scanf("%d",&e[i].employee_id);
		getchar();
		puts("enter the address:");
		gets(e[i].address);
		fwrite(&e[i],sizeof(e[i]),1,fp);
	}
	printf("records added successfully");
	fclose(fp);
	fp=fopen("bca.txt","rb");
	while(fread(&e1,sizeof(e1),1,fp))
	{
		if(e1.employee_id>10)
		{
			printf("%s\t%d\t%ld\t%d\t%s",e1.name,e1.age,e1.cell_phone,e1.employee_id,e1.address);
		}
	}
	return 0;	
	
}
