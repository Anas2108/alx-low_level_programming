#include "main.h"

/**
 * rev_string -function that reverse the string
 * @s:  pointer
 * Return: void
 */

void rev_string(char *s)
{
int counter = 0;
int i = 0;
int half;
char spare;
while (s[counter] != '\0')
{
counter++;
}
half = counter / 2;
while (half--)
{
spare = s[counter - i - 1];
s[counter - i - 1] = s[i];
s[i] = spare;
i++;
}
}

