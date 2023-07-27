#include "main.h"

/**
 * _strcmp - concatenates two strings
 * @s1:  pointer point to the first string
 * @s2:  Pointer point to the second string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i=0; s1[i] != '0' || s2[i] != '0'; i++)
{
    if (s1[i] != s2[i])
    return ((s1[i]) - (s2[i]));
}
return (0);
}
