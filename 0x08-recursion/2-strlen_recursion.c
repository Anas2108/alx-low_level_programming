#include "main.h"

/**
 * _strlen_recursion -  function that returns the length of a string.
 * @s: pointer to the string
 * Return: void
 */

int _strlen_recursion(char *s)
{
static int i=0;
if (*s == '\0')
return i;
i++;
_strlen_recursion(s + 1);
}

