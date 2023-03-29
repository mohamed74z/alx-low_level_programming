/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: negative value if s1 is less than s2, positive value if s1 is greater
 * than s2, or 0 if s1 and s2 are equal
 */
int _strcmp(char *s1, char *s2)
{
    int i;

    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }

    if (s1[i] == '\0' && s2[i] == '\0')
        return (0);

    return (s1[i] - s2[i]);
}
