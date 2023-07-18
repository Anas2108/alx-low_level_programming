#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num:  is the int that will use for the argument of the function
 * Return: integer value
 */
int print_last_digit(int num)
{
int last;
last = num % 10;
if(last<0)
last *= -1;
putchar (last + '0');
return last;
}
