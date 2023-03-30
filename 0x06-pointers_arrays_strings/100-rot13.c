#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
    int i, j;
    char c;

    for (i = 0; s[i]; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
        {
            c = s[i] + 13;
        }
        else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
        {
            c = s[i] - 13;
        }
        else
        {
            c = s[i];
        }

        s[i] = c;
    }

    return s;
}
