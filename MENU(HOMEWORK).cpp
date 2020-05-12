#include<stdio.h>
main()
{
	printf("Menu For Lunch\n");
	printf("If You Don't Know What To Eat Choose A Number From 1 To 5 And We Will Choose food For You \n");
	printf("1.Burger\n 2.Pizza\n 3.Sandwich\n 4.French Fries\n 5.Pasta");
	int food=0;
	scanf("%d",&food);
	
	switch(food)
	{
	
		case 1: 
		
		printf("So Today You will Have Burger");
		
		break;
		
		case 2:
			
		 printf("So Today You will Have Pizza");
		
		break;
		
		case 3:
			
		 printf("So Today You will Have Sandwich");
		
		break;
		
		case 4:
			
		 printf("So Today You will Have French Fries");
		
		break;
		
		case 5:
		 
		printf("So Today You will Have Pasta");
		
		break;
		
		default : 
		
		printf("Invalid. Please Type Numbers From 1 To 5 only");
	}
	
	
}
