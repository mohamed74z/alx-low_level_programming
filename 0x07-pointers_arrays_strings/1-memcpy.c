#include <stdio.h>
#include <stdlib.h>

char* _memcpy(char *dest, char *src, unsigned int n)

{
	for (unsigned int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return dest;
}

int main()
{
	char src[] = "Hello, World!";
	char dest[100];
	_memcpy(dest, src, sizeof(src));
	printf("%s\n", dest);
	return (0);
}
