#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int multiply(int num1, int num2) {
    /* Multiplies two numbers. */
    return num1 * num2;
}

int main(int argc, char *argv[]) {
    // Check if the correct number of arguments are provided
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    // Get the input numbers from command line arguments
    int num1, num2;
    if (sscanf(argv[1], "%d", &num1) != 1 || sscanf(argv[2], "%d", &num2) != 1) {
        printf("Error\n");
        return 98;
    }

    // Multiply the numbers
    int result = multiply(num1, num2);

    // Print the result
    printf("%d\n", result);

    return 0;
}
