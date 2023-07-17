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
char num = '0';
while (num <= '9')
{
putchar(num);
num++;
}
putchar('\n');
return(0);
}
