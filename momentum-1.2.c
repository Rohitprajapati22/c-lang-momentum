#include<stdio.h>

main()
{
	
	int u;
	float total,sum,ans;
	
	printf("Enter electricity units :- ");
	scanf("%d",&u);
	
	if(u <= 50){
		total=u*0.50;
	}
	else if(u <= 150){
		total=25+((u-50)*0.75);
	}
	else if(u <= 250){
 		total=100+((u-150)*1.20);
	}
	else{
		total=220+((u-250)*1.50);
	}
	sum=total*0.20;
	ans=total+sum;
	printf("Total Electicity Bill : Rs. %.2f",ans);
	
}
