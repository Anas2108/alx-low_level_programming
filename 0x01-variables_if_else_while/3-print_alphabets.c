#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet (lower and upper case) using putchar
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
} 
alpha = 'A';
while (alpha <= 'Z')
{
putchar(alpha);
alpha++;

}
putchar('\n');
return (0);
}
