#include<stdio.h>


   struct student 
   { 
       int age;
   }s;
   int main()
   {
       file *fp;
       fp=fopen("hsm.txt","w");
       for (int i=0;i<20;i++)
       {
           printf("enter the age of students");
           puts("enter the age");
           scanf("%d"&s[i].age);
       }
       printf("records added successfully");
       fclose(fp);
       fp=fopen("hsm.txt","rb" );
       while(fread(&s,sizeof(s),1,fp))
       {
           if (&s[i].age)>20;
           {
               fweite(&s[i],sizeof(s),a,fp);
               printf("\n%d",s.age);
               
           }
           fclose(fp);
           return 0;
       
       }
       }
   }

