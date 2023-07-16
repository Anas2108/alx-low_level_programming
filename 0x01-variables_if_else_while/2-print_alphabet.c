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
	
   for (char alpha = 'a'; alpha <= 'z'; alpha++)
   {
      putchar(alpha);
   }

      putchar('\n');
   
    
   return (0);
}
