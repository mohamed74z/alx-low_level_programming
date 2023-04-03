#include <stdio.h>
#include <stdlib.h>

char* _memset(char *s, char b, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        s[i] = b;
    }
    return s;
}

int main() {
    char buffer[100];
    _memset(buffer, 'A', 50);
    printf("%s\n", buffer);
    return 0;
}
