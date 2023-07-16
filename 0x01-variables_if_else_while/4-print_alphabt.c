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
char alpha = 'a';
while (alpha <= 'z')
{
if (alpha != 'q' && alpha != 'e')
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
