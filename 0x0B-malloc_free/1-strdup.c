#include "main.h"

/**
 *_strdup - array for prints a string
 *@str: pointer which point tovthe passed array
 *Return: pointer
 */

char *_strdup(char *str)
{
int i;
char *c_arr;
int size_of_passed=0;

if (!str)
return NULL;

while (str[size_of_passed] != '\0')
{
size_of_passed++;
}
size_of_passed++;

c_arr = (char *) malloc(size_of_passed * sizeof(char));

if (c_arr == NULL)
return NULL;


for (i = 0; i < size_of_passed; i++)
{
c_arr[i] = str[i];
}

return (c_arr);

}

