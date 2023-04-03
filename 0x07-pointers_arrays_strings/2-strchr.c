#include <unistd.h>

char *_strchr(char *s, char c);

int main(void)
{
    char s[] = "Hello, world!";
    char *result = _strchr(s, 'w');
    if (result == NULL)
    {
        write(STDOUT_FILENO, "Not found\n", 10);
    }
    else
    {
        char pos_str[3];
        int pos = result - s;
        pos_str[0] = '0' + pos / 10;
        pos_str[1] = '0' + pos % 10;
        pos_str[2] = '\n';
        write(STDOUT_FILENO, pos_str, 3);
    }
    return (0);
}
