#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at some index
 * @head: The head node
 * @idx: index given by main
 * @n: number to insert in the node
 * Return: @new  address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int position = 1;/*It stars counting positions at 1*/

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
  
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
  
	if (*head == 0)
		return (NULL);
	temp = *head;
  
	while (position < idx)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;/*to put tmp in the place we want*/
		position++;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
