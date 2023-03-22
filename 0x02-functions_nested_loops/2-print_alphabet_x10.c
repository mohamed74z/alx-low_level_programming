#include <stdio.h> /* Include the necessary header file */

void print_alphabet_x10(void); /* Declare the function before main */

int main(void) {
    print_alphabet_x10();
    return 0;
}

void print_alphabet_x10(void) {
    int i;
    char letter;
    for (i = 0; i < 10; i++) {
        letter = 'a';
        while (letter <= 'z') {
            putchar(letter);
            letter++;
        }
        putchar('\n');
    }
}
