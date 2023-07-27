#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest:  pointer point to the first string
 * @src:  Pointer point to the second string
 * @n:    number of letters 
 * Return: char*
 */

char *_strncat(char *dest, char *src, int n)
{
int counter = 0, src_counter = 0, i;

for (i = 0; dest[i] != '\0'; i++);

if (n > i)
n = i;

while (dest[counter] != '\0')
{
counter++;
}
while (src_counter < n )
{
dest[counter] = src[src_counter];
src_counter++;
counter++;
}

return (dest);
}
