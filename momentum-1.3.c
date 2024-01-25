#include<stdio.h>

main()
{
	
	int a;
	
	printf("Enter your number :- ");
	scanf("%d",&a);
	
	if(a > 90){
		printf("your gred is  A+");
	}
	else if(a > 80){
		printf("your gred is  A");
	}
	else if(a > 70){
		printf("your gred is  B+");
	}
	else if(a > 60){
		printf("your gred is  B");
	}
	else if(a > 50){
		printf("your gred is  C+");
	}
	else if(a > 40){
		printf("your gred is  C");
	}
 	else if(a > 33){
		printf("your gred is  D");
	}
	else{
		printf("you are Fali...");
	}
	
}
