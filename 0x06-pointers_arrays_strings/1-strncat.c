#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    /* Find the end of the destination string */
    for (i = 0; dest[i]; i++)
        ;

    /* Append the source string to the destination string, up to a maximum of n bytes */
    for (j = 0; src[j] && j < n; j++)
        dest[i + j] = src[j];

    /* Add the null terminator to the end of the concatenated string */
    dest[i + j] = '\0';

    return dest;
}
