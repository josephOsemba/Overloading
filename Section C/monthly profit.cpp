/*Write a C program that prompts the user to enter a series of numbers 
representing monthly profits for a business. The program should calculate the 
total profits, average profits, and the number of months with profits above a 
target amount. The program should prompt the user to enter the target profit 
amount*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <unistd.h>

int main(){
	
	float monthlyProfit, tProfit = 0, avrgProfit, targetProfit;
	int counter=0;
	
	printf("Enter profit target amount: ");
	scanf("%f", &targetProfit);
	system("cls");
	sleep(3);
	
	
	while (1){
		printf("\nEnter Monthly profit (enter 0 to  end the loop): ");
		scanf("%f", &monthlyProfit);
		
		counter++;
		
		tProfit +=monthlyProfit;
		avrgProfit = tProfit/counter;
	
	if (monthlyProfit >= targetProfit){
	printf("In month %d profit is $%.4f which is above target by $%.4f\n\n", counter, monthlyProfit, monthlyProfit-targetProfit);
	}
		
		if (monthlyProfit<=0){
			break;
		}
			
	}
	
	printf("\nTotal profit is $%.4f\n", tProfit);
	printf("Average profit is $%.4f\n", avrgProfit);

	
return 0;
}
