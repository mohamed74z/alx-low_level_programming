#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void free_listint(listint_t *head) {
  listint_t *current = head;
  while (current != NULL) {
    listint_t *next = current->next;
    free(current);
    current = next;
  }
}
