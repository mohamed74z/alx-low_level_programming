#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n) {
  if (head == NULL || idx > listint_len(*head)) {
    return NULL;
  }

  listint_t *new_node = malloc(sizeof(listint_t));
  if (new_node == NULL) {
    return NULL;
  }

  new_node->n = n;
  new_node->next = NULL;

  if (idx == 0) {
    new_node->next = *head;
    *head = new_node;
  } else {
    listint_t *current = *head;
    for (unsigned int i = 0; i < idx - 1; i++) {
      current = current->next;
    }
    new_node->next = current->next;
    current->next = new_node;
  }

  return new_node;
}
