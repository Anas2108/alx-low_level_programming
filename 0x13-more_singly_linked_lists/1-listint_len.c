#include "lists.h"

/**
 * listint_len - Print number of elements .
 * @h: Pointer to a list.
 * Return: Integer.
*/

size_t listint_len(const listint_t *h)
{
size_t counter = 0;

while (h)
{

	counter++;
	h = h->next;
}

return (counter);

}
