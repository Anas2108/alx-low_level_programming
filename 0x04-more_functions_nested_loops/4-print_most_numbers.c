#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9
 * Return: 0
 */
void print_most_numbers(void)
{
int num = 48;
while (num <= 57)
{
if (num != 50 && num != 52)
putchar((char)num);
num++;
}
putchar('\n');
}
