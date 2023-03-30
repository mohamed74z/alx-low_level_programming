#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 algorithm.
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
    int i, j;
    char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    for (i = 0; s[i]; i++)
    {
        for (j = 0; alpha[j]; j++)
        {
            if (s[i] == alpha[j])
            {
                s[i] = rot13[j];
                break;
            }
        }
    }

    return s;
}
