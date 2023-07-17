#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: print numbers from 0 to 9 using putchar
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
int num = 48;
while (num <= 57)
{
putchar((char)num);
if (num != 57)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
