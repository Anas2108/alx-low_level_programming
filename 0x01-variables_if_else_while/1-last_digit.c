#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description: Get a random number and compare the last digit with 5
 * and if it is positive, negative, or zero
 * Return: 0
 */

int main(void)
{
	int n;
    int last_digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
   
    last_digit=n%10;

	if (last_digit>5)
    
     printf("Last digit of %d is %d and is greater than 5",n,last_digit);
    

    else if (last_digit<6 && last_digit !=0)

     printf("Last digit of %d is %d and is less than 6 and not 0",n,last_digit);

    else if (last_digit==0)

    printf("Last digit of %d is %d and is 0",n,last_digit);
    
	return (0);
}
