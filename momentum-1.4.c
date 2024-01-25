#include<stdio.h>

main()
{
	
	int choice;
	
	printf("press 1 for Monday\n");
	printf("press 2 for Tuesday\n");
	printf("press 3 for Wednesday\n");
	printf("press 4 for Thursday\n");
	printf("press 5 for Friday\n");
	printf("press 6 for Saturday\n");
	printf("press 7 for Sunday\n");

	
	printf("Enter your choice :- ");
	scanf("%d",&choice);
	
	
	switch(choice){
		
		case 1:
			printf("1st day of week is - Monday");
			break;
		case 2:
			printf("2st day of week is - Tuesday");
			break;
		case 3:
			printf("3st day of week is - Wednesday");
			break;		
		case 4:
			printf("4st day of week is - Thursday");
			break;
		case 5:
			printf("5st day of week is - Friday");
			break;
		case 6:
			printf("6st day of week is - Saturday");
			break;
		case 7:
			printf("7st day of week is - Sunday");
			break;
				
			
		default:
			printf("Please Enter Valid Number:");							
	}
	
	
}
