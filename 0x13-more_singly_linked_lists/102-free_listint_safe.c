#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to the head of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current = *h;
listint_t *temp = NULL;
size_t count = 0;

while (current != NULL)
{
count++;
temp = current->next;

if (temp >= current)
{
free(current);
break;
}

free(current);
current = temp;
}

*h = NULL;  /* Set the head to NULL */
return (count);
}
