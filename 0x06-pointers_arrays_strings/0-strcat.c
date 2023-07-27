#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest:  pointer point to the first string
 * @src:  Pointer point to the second string
 * Return: char*
 */

char *_strcat(char *dest, char *src)
{
char *spare;
int counter=0,src_counter=0;

while (dest[counter] != '\0')
{
counter++;
}
while (src[src_counter] != '\0')
{
dest[counter]=src[src_counter];
src_counter++;
counter++;
}
dest[counter]='\0';
return (dest);
}

