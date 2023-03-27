#include <stdio.h>

void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        int num = a[i];
        int div = 1;

        /* get the divisor for the current number */
        while (num / div > 9)
            div *= 10;

        /* print each digit of the number */
        while (div > 0)
        {
            int digit = (num / div) % 10;
            putchar(digit + '0');
            div /= 10;
        }

        /* separate the numbers with a comma and space, except for the last one */
        if (i < n - 1)
        {
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');
}
