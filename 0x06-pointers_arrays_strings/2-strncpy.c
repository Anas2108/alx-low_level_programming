#include "main.h"

/**
 *_strncpy - function that copies a string.
 * @dest:  pointer point to the first string
 * @src:  Pointer point to the second string
 * Return: char*
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i=0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
} 
dest[i] = '\0';
return (dest);
}

