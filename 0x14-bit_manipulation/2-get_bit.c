#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int get_bit(unsigned long int n, unsigned int index) {
    if (index >= sizeof(n) * 8) {
        return -1;
    }
    unsigned long int mask = 1UL << index;
    return (n & mask) ? 1 : 0;
}
