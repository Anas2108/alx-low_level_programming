#include "main.h"

/**
 * _puts -function that print string
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


int main ()
{
    char str[]="aaanas";
   _puts(str);
}
