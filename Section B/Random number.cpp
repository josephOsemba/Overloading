/*Write a C program that generates a random number between 1 and 100 and
allows the user to guess the number. The program should tell the user if their
guess is too high or too low and give them a maximum of 5 guesses to get the
correct answer.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int randNum, guess, totalGuess;
	
	srand(time(NULL));
	
	randNum = rand() % 100 + 1;
	
	while (totalGuess<5){
		printf("Guess your lucky number: ");
		scanf("%d", &guess);
		totalGuess++;
		
		if (guess<randNum){
			printf("Too low\n");
		} else if (guess>randNum){
			printf("Too high\n");
		} else ("Congratulations, the correct guess is %d", guess);
	}
	
	printf("Sorry, you are out of guesses, the correct number is %d", randNum);;

return 0;
}

