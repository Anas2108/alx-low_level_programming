#include "main.h"

/**
 * _isupper - check the upper and lower case
 * @c: first integer
 * Return: 1>>upper , 0>>lower
 */

int _isupper (int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}

