#include <stdio.h>

void print_alphabet(void) {
    char letter = 'a';  // Start with the letter 'a'
    
    while (letter <= 'z') {  // Loop until the letter 'z'
        _putchar(letter);    // Print the current letter
        letter++;            // Increment the letter to the next one
    }
    
    _putchar('\n');  // Print a newline character at the end
}
