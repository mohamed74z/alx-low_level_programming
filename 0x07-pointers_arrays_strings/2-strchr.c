#include <stdlib.h>

char *_strchr(char *s, char c);

int _putchar(char c)
{
    return write(1, &c, 1);
}

void _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
}

int main(void)
{
    char s[] = "Hello, world!";
    char *result = _strchr(s, 'w');
    if (result == NULL)
    {
        _puts("Character not found.\n");
    }
    else
    {
        _puts("Character found at position ");
        char pos = result - s + '0';
        _putchar(pos);
        _putchar('.');
        _putchar('\n');
    }
    return (0);
}
