#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int pop_listint(listint_t **head) {
  if (*head == NULL) {
    return 0;
  }

  listint_t *temp = *head;
  int n = temp->n;
  *head = temp->next;
  free(temp);

  return n;
}
