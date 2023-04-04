#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: the matrix of integers
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
    int row, col;
    int sum1 = 0, sum2 = 0;

    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            if (row == col)
                sum1 += *(a + (row * size) + col);

            if (row + col == size - 1)
                sum2 += *(a + (row * size) + col);
        }
    }

    _putchar(sum1 / 10 + '0');
    _putchar(sum1 % 10 + '0');
    _putchar('\n');

    _putchar(sum2 / 10 + '0');
    _putchar(sum2 % 10 + '0');
    _putchar('\n');
}
