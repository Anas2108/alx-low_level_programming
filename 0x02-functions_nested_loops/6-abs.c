#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _abs - return abs value
 * @n : number to check
 * Return:0 or 1
 */

int _abs(int num)
{
if (num < 0)
return (num*-1);
else if (num > 0)
return (num);
else if (num == 0)
return (0);
}

