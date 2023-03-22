//Write a C program that uses a loop to calculate the factorial of a number entered
//by the user. In mathematics, the factorial of a non-negative integer n, denoted by
//n!, is the product of all positive integers less than or equal to n. For example, 5! =
//5 x 4 x 3 x 2 x 1 = 120.

#include <stdio.h>

int main (){
	int n, i;
	long long num=1;
	
	// the maximum factorial supported by long long data type in c is 39!
	//if it's exceed, the value of long long data type wraps itself and changes
	//....to negative due to the way it's represented in memory
	// this is called integer overflow
	
	printf("Enter a number (max 39): ");
	scanf("%d", &n);
	
	for (i=1; i<=n; i++){
		num *=i;
	
	}
	printf("The factorial of %d is %lld", n, num);
	
return 0;
}
