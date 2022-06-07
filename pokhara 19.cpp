#include <stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int age;
    long int cell_phone;
    char address[20];

}s[3],s1,s2[3];

int main()
 {

    FILE *fp;
    fp=fopen("hsm.txt","wb");
    for(int i=0;i<3;i++)
    {
        printf("Enter the record for student_%d\n",i+1);
        puts("Enter the name");
        gets(s[i].name);
        puts("Enter the age");
        scanf("%d", &s[i].age);
        puts("Enter the cell phone no");
        scanf("%ld", &s[i].cell_phone);
        getchar();
        puts("Enter the address");
        gets(s[i].address);

        fwrite(&s[i],sizeof(s[i]),1,fp);
    }

    printf("Records added successfully");
    fclose(fp);

    FILE *fp1;
    fp=fopen("hsm.txt","rb");
    fp1 = fopen("hsm1.txt","wb");
    int i=0;
    while(fread(&s1, sizeof(s1),1,fp)){

            if((strcasecmp(s1.address,"Pokhara"))==0)
            {
                s1.age =19;


            }

            fwrite(&s1,sizeof(s1),1, fp1);


    }
fcloseall();

fp=fopen("hsm.txt","wb");
fp1 = fopen("hsm1.txt","rb");
printf("\nNAME\tAGE\tCELl\tAddress");
 while(fread(&s1, sizeof(s1),1,fp1)){
                fwrite(&s1,sizeof(s1),1,fp);
                printf("\n%s\t%d\t%ld\t%s", s1.name,s1.age,s1.cell_phone,s1.address);
    }

fcloseall();

    return 0;
}

