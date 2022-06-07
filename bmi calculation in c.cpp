#include<stdio.h>
int main()
{
	float height,weight,bmi;
	int choice;
	printf("\n1.start the bmi calculation\n0.quit the calculation\n");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			printf("enter the height in meter:\n");
			scanf("%f",&height);
			printf("enter the weight in kg:\n");
			scanf("%f",&weight);
			bmi=weight / (height * height);
			printf("your body mass index(BMI)is %.2f\n",bmi);
			if(bmi<15)
			{
				printf("your bmi category is : starvation\n");
			}
			else if (bmi>=15.10 && bmi<=17.50)
			{
				printf("your bmi category is :anorexic\n");
			}
			else if (bmi>=17.51 && bmi<=18.50)
			{
				printf("your bmi category is :underweight\n");
			}
			else if (bmi>=18.51&& bmi<=24.90)
			{
				printf("your bmi category is :ideal\n");
			}
			else if (bmi>=24.91&& bmi<=25.90)
			{
				printf("your bmi category is :overweight\n");
			}
			else if (bmi>=25.91&& bmi<=30.90)
			{
				printf("your bmi category is :obese\n");
			}
			else if (bmi>=30.91)
			{
				printf("your bmi category is :morbidly obese\n");
			}
			
			
			case 0:
				printf("***********************************");
				puts("\nexited\n");
				break;
				default:
					puts("invalid input");
		}
		return 0;
}
