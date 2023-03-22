/*write a c program that calculates the volume of a cube using a function named 'volume' 
that takes one integer argument: the length of one side of the cube. then, 
modify the program to calculate the volume of a rectangular prism using the same function, 
but with two additional integer arguments that specify the width and height of the prism. 
use default parameter values for the additional arguments so that the function can be called 
with just one argument for a cube, or with three arguments for a rectangular prism.*/

#include <stdio.h>

// function to calculate the volume of a cube or rectangular prism
int volume(int side, int width = 0, int height = 0) {
    if (width == 0 && height == 0) {
        // calculate volume of cube
        return side * side * side;
    } else {
        // calculate volume of rectangular prism
        return side * width * height;
    }
}

int main() {
    int shape, a, b, c, result;

    printf("Enter the number of sides of the shape (1 for cube, 3 for rectangular prism): ");
    scanf("%d", &shape);

    switch (shape) {
        case 1:
            printf("Enter the length of one side of the cube: ");
            scanf("%d", &a);
            result = volume(a);
            printf("The volume of the cube is %d.\n", result);
            break;
        case 3:
            printf("Enter the length, width and height of the rectangular prism: ");
            scanf("%d %d %d", &a, &b, &c);
            result = volume(a, b, c);
            printf("The volume of the rectangular prism is %d.\n", result);
            break;
        default:
            printf("Invalid number of sides.\n");
    }

    return 0;
}

