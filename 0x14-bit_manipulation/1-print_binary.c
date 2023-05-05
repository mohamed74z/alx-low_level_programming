#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_binary(unsigned long int n) {
    int bits = sizeof(n) * 8;
    int flag = 0;

    for (int i = bits - 1; i >= 0; i--) {
        unsigned long int mask = 1UL << i;
        if (n & mask) {
            printf("1");
            flag = 1;
        } else if (flag) {
            printf("0");
        }
    }
    if (!flag) {
        printf("0");
    }
}
