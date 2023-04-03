#include <unistd.h>

char *_strchr(char *s, char c);

int main(void)
{
	char s[] = "Hello, world!";
	char *result = _strchr(s, 'w');
	if (result == NULL)
	{
		write(STDOUT_FILENO, "Character not found.\n", 21);
	}
	else
	{
		char pos_str[10];
		int pos = result - s;
		int i = 0;
		while (pos > 0)
		{
			pos_str[i++] = '0' + (pos % 10);
			pos /= 10;
		}
		write(STDOUT_FILENO, "Character found at position ", 28);
		while (i > 0)
		{
			write(STDOUT_FILENO, &pos_str[--i], 1);
		}
		write(STDOUT_FILENO, ".\n", 2);
	}
	return (0);
}
