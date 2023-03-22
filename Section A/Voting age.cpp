//Write a C program that prompts the user to enter their age and checks whether
//they are old enough to vote in Kenya. In Kenya, the legal voting age is 18.

#include <stdio.h>

int main(){
	
	int age;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	age >= 18 ? printf("Eligible to vote\n") : printf("You are below 18 years \n Not eligible to vote\n");
	
return 0;
}
