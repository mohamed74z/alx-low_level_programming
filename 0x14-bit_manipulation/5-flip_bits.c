#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int diff = n ^ m;
    unsigned int count = 0;

    while (diff > 0) {
        count += diff & 1;
        diff >>= 1;
    }

    return count;
}
