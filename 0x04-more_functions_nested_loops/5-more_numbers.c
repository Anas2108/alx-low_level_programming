#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return:void
 */
void more_numbers(void)
{
int c=0;
int counter=10;
while(counter>0)
{
while (c < 10)
{
putchar('0'+ c);
c++;
}
c = 0;
while(c < 5)
{
putchar('0' + 1);
putchar('0'+ c);
c++;
}
putchar('\n');
c=0;
counter--;
}
}
