#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <unistd.h>

int area(int width, int height);
float area(int base, int height, int hypotenuse);

int main(){
	
	while (1){
		
		int shape;
		printf("Press 2 for rectangle or 3 for triangle (0 for exiting): ");
		scanf("%d", &shape);
		system("cls");
		
		switch (shape){
			case 2:
				int b, h;
				printf("Enter the width and height of the rectangle:");
				scanf("%d %d", &b, &h);
				area(b,h);
				printf("\n\nPress any key to continue calculating");
				getch();
				system("cls");
				break;
				
			case 3:
				int x, y, z;
				printf("Enter the base, height and hypotenuse of the triangle: ");
				scanf("%d %d %d", &x, &y, &z);
				area(x,y,z);
				printf("\n\nPress any key to continue calculating");
				getch();
				system("cls");
				break;
				
			case 0:
				printf("Exiting....\n\n");
				return 0;
				
			default:
				printf("Out of range! Try again\n\n");
				sleep(3);
				system("cls");
				main();
		}

	}

return 0;	
}
int area(int width, int height){
	int rArea = width*height;
	printf("The area of the rectangle is: %d", rArea);
	return rArea;
}
float area(int base, int height, int hypotenuse){
	float s = (base+height+hypotenuse)/2.0;
	float tArea = sqrt(s*(s-base)*(s-height)*(s-hypotenuse));
	printf("The area of the triangle is: %.2f", tArea);
	return tArea;
}


