#include "lists.h"

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
*/


size_t print_listint(const listint_t *h)
{

	unsigned int counter = 0;
	const listint_t *t;

	t = h;

while (t)
{

	counter++;
	printf("%d\n", t->n);
	t->next;
}

return (counter);

}

