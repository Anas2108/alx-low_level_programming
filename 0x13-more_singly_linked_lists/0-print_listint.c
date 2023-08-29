#include "lists.h"

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return : integer
*/


size_t print_listint(const listint_t *h)
{
	size_t counter = 0;    
while (h)
{
	counter++;
	h->next;
}

return (counter);

}
