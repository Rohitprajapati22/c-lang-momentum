#include<stdio.h>

main()
{
	
	int choice;
	
	printf("press 1 for January\n");
	printf("press 2 for Fabruary\n");
	printf("press 3 for March\n");
	printf("press 4 for April\n");
	printf("press 5 for May\n");
	printf("press 6 for Jun\n");
	printf("press 7 for July\n");
	printf("press 8 for August\n");
	printf("press 9 for September\n");
	printf("press 10 for Actomber\n");
	printf("press 11 for November\n");
	printf("press 12 for December\n");
	
	printf("Enter your choice :- ");
	scanf("%d",&choice);
	
	
	switch(choice){
		
		case 1:
			printf("month's name is January");
			break;
		case 2:
			printf("month's name is Fabruary");
			break;
		case 3:
			printf("month's name is March");
			break;		
		case 4:
			printf("month's name is April");
			break;
		case 5:
			printf("month's name is May");
			break;
		case 6:
			printf("month's name is Jun");
			break;
		case 7:
			printf("month's name is July");
			break;
		case 8:
			printf("month's name is August");
			break;
		case 9:
			printf("month's name is September");
			break;
		case 10:
			printf("month's name is Actomber");
			break;
		case 11:
			printf("month's name is November");
			break;
		case 12:
			printf("month's name is December");
			break;		
			
		default:
			printf("Please Enter Valid Number:");							
	}
	
	
}
