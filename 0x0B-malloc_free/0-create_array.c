#include "main.h"

/**
 *create_array - array for prints a string
 *@size: number elements array
 *@c: char
 *Return: pointer
 */

char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i;
ar = (char *) malloc(size * sizeof(c));
if (size == 0)
return (NULL);

if (ar == 0)
return (NULL);

for (i = 0; i < size; i++)
{
ar[i] = c;
}

return (ar);
}
