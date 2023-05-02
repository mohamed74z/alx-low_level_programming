#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
 *
 *
 */
	size_t print_listint(const listint_t *h) {
	size_t count = 0;
	while (h != NULL) {
 		printf("%d\n", h->n);
 		h = h->next;
		count++;
	}
	return count;
}
