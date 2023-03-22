#include <stdio.h>
#include <ctype.h>

int _islower(int c);

int main() {
    int n, r;

    printf("Enter a lowercase letter: ");
    n = getchar();

    r = _islower(n);
    printf("%d\n", r);

    return 0;
}

int _islower(int c) {
    return islower(c);
}
