#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
    char *start = dest;

    /* Move the dest pointer to the end of the string */
    while (*dest)
        dest++;

    /* Copy the src string to the end of the dest string */
    while (*src)
        *dest++ = *src++;

    /* Add the terminating null byte */
    *dest = '\0';

    return start;
}
