#include <stdio.h>
#include <math.h>
int main(){
int i = 0, sum = 0;
int average = 0;

int marks [7] = {54, 56, 76, 44, 78, 65, 43};

for (i = 0; i<=7; i++){
sum = sum+ marks[i];
average = sum/7;
}
printf("sum is %d and average is %d", sum, average); 
return 0;
}
	
	
