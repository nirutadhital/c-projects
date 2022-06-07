#include<stdio.h>
int main()
{
	int choice;
	printf("\n\t\t\tQUIZ");
	printf("\n1.start the quiz\t\t\t\n0.quit the quiz");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nQ1.what is the capital city of Nepal?\n1.hetauda\n2.kathmandu\n3.pokhara\n4.butwal\n");
			scanf("%d",&choice);
			switch(choice)
			{
				case 2:
					puts("correct");
					break;
					default:
						puts("wrong\nthe cprrect answer is 2.kathmandu");
						break;
			}
			printf("\nQ2.what is the capital city of India?\n1.mumbai\n2.new delhi\n3.uttarakhand\n4.maharastra\n");
			scanf("%d",&choice);
			switch(choice)
			{
				case 2:
					puts("correct");
					break;
					default:
						puts("wrong\nthe cprrect answer is 2.new delhi");
						break;
			}
			printf("\nQ3.what is the capital city of USA?\n1.los angeles\n2.new york city\n3.san frabcisco\n4.washington,D.C.\n");
			scanf("%d",&choice);
			switch(choice)
			{
				case 4:
					puts("correct");
					break;
					default:
						puts("wrong\nthe correct answer is 4.washington,D.C.");
						break;
			}
			printf("\nQ4.who is the current prime minister of Nepal?\n1.kp oli\n2.puspa kamal dahal(prachanda)\n3.se bahadur deuba\n4.bidya devi bhandari\n");
			scanf("%d",&choice);
			switch(choice)
			{
				case 3:
					puts("correct");
					break;
					default:
						puts("wrong\nthe correct answer is 3.ser bahadur deuba");
						break;
			}
			printf("\nQ5.The first women to climb mount everent was?\n1.junko tabei\n2.marie jose\n3.Pasang Lhamu Sherpa\n4.bidya devi bhandari\n");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
					puts("correct");
					break;
					default:
						puts("wrong\nthe correct answer is 1.junko tabei");
						break;
			}
			
			case 0:
				printf("**********************************************");
				printf("\n\t\texited");
				break;
				default:
					printf("\n\t\tinvalid input!!");		
	}
	return 0;
}
//thank you so much for watching this video..............
