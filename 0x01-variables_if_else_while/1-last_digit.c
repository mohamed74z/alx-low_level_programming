#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));

	int n = rand();
	int last_digit = n % 10;

	printf("Last digit of %d is %d and is", n, last_digit);

	if (last_digit > 5)
       	{
		printf(" greater than 5\n");
	} else if (last_digit == 0)
       	{
		printf(" 0\n");
	} else
       	{
		printf(" less than 6 and not 0\n");
	}

	return (0);
}
