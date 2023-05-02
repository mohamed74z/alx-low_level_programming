#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index) {
  if (head == NULL || index >= listint_len(head)) {
    return NULL;
  }

  listint_t *current = head;
  for (unsigned int i = 0; i < index; i++) {
    current = current->next;
  }

  return current;
}
