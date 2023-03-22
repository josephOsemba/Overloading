/*write a c program that calculates the area of a rectangle using a function named 'area' 
that takes two integer arguments: the width and the height of the rectangle. then, 
modify the program to calculate the area of a triangle using a function named 'area' 
that takes three integer arguments: the base, height, an hypotenuse of the triangle. 
use a switch statement to select the appropriate function based on the number of arguments passed to it.*/

#include <stdio.h>
#include <math.h>

// function to calculate the area of a rectangle
int area(int width, int height) {
    return width * height;
}

// function to calculate the area of a triangle
int area(int base, int height, int hypotenuse) {
    int s = (base + height + hypotenuse) / 2;
    return sqrt(s * (s - base) * (s - height) * (s - hypotenuse));
}

int main() {
    int shape, a, b, c, result;

    printf("Enter the number of sides of the shape (2 for rectangle, 3 for triangle): ");
    scanf("%d", &shape);

    switch (shape) {
        case 2:
            printf("Enter the width and height of the rectangle: ");
            scanf("%d %d", &a, &b);
            result = area(a, b);
            printf("The area of the rectangle is %d.\n", result);
            break;
        case 3:
            printf("Enter the base, height and hypotenuse of the triangle: ");
            scanf("%d %d %d", &a, &b, &c);
            result = area(a, b, c);
            printf("The area of the triangle is %d.\n", result);
            break;
        default:
            printf("Invalid number of sides.\n");
    }

    return 0;
}

