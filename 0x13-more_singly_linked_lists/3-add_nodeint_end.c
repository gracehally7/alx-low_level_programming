#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *cursor = *head;

	new_node = malloc(sizeof(listint_t));
	if (end_node != NULL)
  {
	   end_node->n = n;
	   end_node->next = NULL;
  }
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (h->next)
		h = h->next;

	h->next = end_node;
	return (end_node);
}
