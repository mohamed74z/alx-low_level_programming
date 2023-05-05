#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int set_bit(unsigned long int *n, unsigned int index) {
    if (index >= sizeof(*n) * 8) {
        return -1;
    }
    *n |= (1UL << index);
    return 1;
}
