#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to copy.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    /* Copy each character of the source string to the destination buffer */
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];

    /* Fill the remaining space in the destination buffer with null bytes */
    for ( ; i < n; i++)
        dest[i] = '\0';

    return dest;
}
