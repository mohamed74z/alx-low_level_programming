#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
    int i, j;

    /* Find the end of the destination string */
    for (i = 0; dest[i]; i++)
        ;

    /* Append the source string to the destination string */
    for (j = 0; src[j]; j++)
        dest[i + j] = src[j];

    /* Add the null terminator to the end of the concatenated string */
    dest[i + j] = '\0';

    return dest;
}
