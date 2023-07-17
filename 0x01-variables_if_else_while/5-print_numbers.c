#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet (except q and e) using putchar
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
}
