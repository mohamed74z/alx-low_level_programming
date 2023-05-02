#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int sum_listint(listint_t *head) {
  if (head == NULL) {
    return 0;
  }

  int sum = 0;
  listint_t *current = head;
  while (current != NULL) {
    sum += current->n;
    current = current->next;
  }

  return sum;
}
