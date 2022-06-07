
#include <stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int age;
    int roll;
}s[5],temp;
int main() {

    for(int i=0;i<5;i++)
    {

        printf("Enter the information for student_%d\n",i);
        puts("ENter name:");
        fflush(stdin);
        fgets(s[i].name,sizeof(s[i].name),stdin);
        puts("Enter age");
        scanf("%d", &s[i].age);
        puts("Enter roll");
        scanf("%d",&s[i].roll);



    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++){
            if((strcmp(s[i].name,s[j].name))>0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("\nName\t\tAge\t\tRoll\n");
    for(int i=0;i<5;i++)
    {

        printf("%s\t%d\t%d\n", s[i].name,s[i].age,s[i].roll);

    }

    return 0;
}



