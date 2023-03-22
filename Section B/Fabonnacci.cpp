/*Write a C program that prompts the user to enter a positive integer n and then
prints out the first n terms of the Fibonacci sequence. The Fibonacci sequence is a
series of numbers in which each number is the sum of the two preceding
numbers. The sequence starts with 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <conio.h>

	void print_header();

int main(){
    int n1=0,n2=1,n3,i, range;

    print_header();
    getch();

    printf("KINDLY ENTER ANY POSITIVE INTEGER\n");
    scanf("%u", &range);

    printf("\n\nThe first ten fabonnaci series in the range of %d are:\n%u%5u",range, n1,n2);

    for (i=2; i<range && i < 10; ++i){
        n3=n1+n2;
        printf("%5u", n3);

        n1=n2;
        n2=n3;

    }

return 0;
}
void print_header(){
    printf("\t\t\t    FOBONACCI SERIES\n");
    printf("\t****DEDICATED TO ALL THOSE BORN ON NOV 23rd*****\n");
    printf("\t\t\tCOPYRIGTH JOSES' TECHHUB INC\n");
    printf("\t\t\tPress any key to continue\n\n");
}
