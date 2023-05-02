#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index) {
  if (head == NULL || *head == NULL || index >= listint_len(*head)) {
    return -1;
  }

  listint_t *current = *head;
  listint_t *previous = NULL;

  for (unsigned int i = 0; i < index; i++) {
    previous = current;
    current = current->next;
  }

  if (previous == NULL) {
    *head = current->next;
  } else {
    previous->next = current->next;
  }

  free(current);

  return 1;
}
