#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description:print all the numbers of base 16 in lowercase followed by a new line
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
char alpha = '0';
while (alpha <= '9')
{
putchar(alpha);
alpha++;
}
alpha = 'a';
while (alpha <= 'f')
{
putchar(alpha);
alpha++;

}
putchar('\n');
return (0);
}
