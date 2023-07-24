#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @s:  pointer
 * Return: void
 */

void puts2(char *str)
{
int counter = 0;
while (str[counter] != '\0')
{
if (counter % 2 ==0)
putchar(str[counter]);
counter++;
}
putchar('\n');
}

