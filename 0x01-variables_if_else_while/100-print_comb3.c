#include <stdio.h>

int main() {
    int i, j;
    // Prints all possible different combinations of two digits in ascending order, separated by a comma and a space.
    for (i = 0; i <= 8; i++) {
        for (j = i + 1; j <= 9; j++) {
            putchar('0' + i);
            putchar('0' + j);
            if (i != 8 || j != 9) {
                putchar(',');
                putchar(' ');
            }
        }
    }
    return 0;
}
