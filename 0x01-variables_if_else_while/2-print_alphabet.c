#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description: print the alphabet using putchar
 * and if it is positive, negative, or zero
 * Return: 0
 */

int main(void)
{
	
   for (int alpha = 97; alpha < 123; alpha++)
   {
    putchar(alpha);
   }

   putchar('\n');
   
    
	return (0);
}
