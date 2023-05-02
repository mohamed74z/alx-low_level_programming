#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

size_t listint_len(const listint_t *h) {
  size_t count = 0;
  while (h != NULL) {
    count++;
    h = h->next;
  }
  return count;
}
