#include <stdio.h>

void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        putchar("%d", a[i]);
        if (i < n - 1)
        {
            putchar(", ");
        }
    }
    putchar("\n");
}
