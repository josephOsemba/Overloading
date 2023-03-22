/*Write a C program that reads in a list of integers from the user and calculates the
sum and average of the numbers. The program should allow the user to continue
entering numbers until they enter a negative value.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void wait(int seconds);


int main(){
	int num, i, sum=0, avrg;

	while (1){
		printf("Enter a number: ");
		scanf("%d", &num);
		
		if (num<0){
			break;
		}
	i++;
	sum += num;
}
	
	if (i==0){
		printf("No value entered \n");
	} 
		else {
			avrg = (float) sum/i;
			system("cls");
			printf("A negative number has been encountered\n");
			wait(3);
			printf("The sum is %d \nThe average is %d", sum, avrg);	
		}
	
return 0;
}
void wait(int seconds){
	 clock_t end_wait=(clock() + (seconds * CLOCKS_PER_SEC));
    while(clock()<end_wait)
    {}
}

