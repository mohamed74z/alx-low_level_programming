#include <stdio.h>

void puts_half(char *str) {
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
    
	int start;
	if (len % 2 == 0) {
		start = len / 2;
	} else 
	{
		start = (len - 1) / 2;
	}
    
	for (int i = start; i < len; i++)
	{
		putchar(str[i]);
	}
    
	putchar('\n');
}
