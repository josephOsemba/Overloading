/*Write a C program that prompts the user to enter a series of numbers 
representing daily sales figures for a business. The program should calculate the 
total sales, average sales, and the number of days with sales above a target 
amount. The program should prompt the user to enter the target sales amount.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <unistd.h>

int main(){
	
	float dailySales, tSales, avrgSales, targetSales;
	int counter = 0;
	
	printf("Enter target sales: ");
	scanf("%f", &targetSales);
	system("cls");
	sleep(2);
	
	while (1){
		printf("Enter daily sales amount (enter 0 to exit the loop): ");
		scanf("%f", &dailySales);
		
		counter++;
		
		if (dailySales >= targetSales){
			printf("In day %d, daily sales is greater than target sales by $%.3f\n\n", counter, dailySales-targetSales);
		}
		
		if (dailySales <=0){
			break;
		}
		
		tSales +=dailySales;
		avrgSales = tSales/counter;
	}
	
	printf("\nIn %d days: ", counter);
	printf("\nTotal sales is $%.3f\n", tSales);
	printf("Average sales is $%.3f\n", avrgSales);
	
return 0;
}

