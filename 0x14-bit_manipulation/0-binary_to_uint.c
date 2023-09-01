#include "main.h"


/**
 * power - return the power of num
 * unsigned int.
 * @base: base.
 * @exponent: power
 *
 * Return: unsigned int.
 */

unsigned int power(unsigned int base, unsigned int exponent)
{
	unsigned int result = 1;

	while (exponent > 0)
	{
		result *= base;
		exponent--;
	}

	return (result);
}



/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
int length = 0;
int i, base2, j = 0;
unsigned int digit;
unsigned int sum = 0;

while (b[j] != '\0')
{
	length++;
	j++;
}

for (i = length - 1, base2 = 0; i >= 0; i--, base2++)
{
	if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	digit = b[i] - '0';
	sum += (digit * power(2, base2));
}
return (sum);

}

