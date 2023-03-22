//Write a C program that prompts the user to enter a number and then prints out
//all the even numbers between 1 and the user's input value. For example, if the
//user enters 10, the program should print out 2, 4, 6, 8, and 10.

#include <stdio.h>

int main(){
	int num, i;
	
	printf("Enter a number: ");
	scanf("%u",&num);
	
	for (i=2; i<=num; i++){
		if (i%2==1){
			continue;
		}
	printf("%3u", i);
	}
		
return 0;
}
