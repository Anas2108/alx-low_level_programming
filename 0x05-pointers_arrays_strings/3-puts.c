#include "main.h"

/**
 * _strlen -function that print string
 * @str:  pointer
 * Return: void
 */

void _puts(char *str)
{
int counter = 0;
while (str[counter] != '\0')
{
putchar(str[counter]);
counter++;
}
putchar('\n');
}

