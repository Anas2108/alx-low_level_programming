#include "main.h"

/**
 * strlenn - length of a string
 * @str: input char
 * Return: length of a string
 */

int strlenn(char *str)
{
int length = 0;
while (str[length] != '\0')
{
length++;
}

return (length);
}

/**
* str_concat - Concat 2 strings.
* @s1: string
* @s2: string
* Return: char
*/
char *str_concat(char *s1, char *s2)
{
char *arr;
int l1 = 0, l2 = 0;
int len = 0;
int loop1;
int loop2; 

if (!s1)
s1 = "";
else
l1 = strlenn(s1);

if (!s2)
s2 = "";
else
l2 = strlenn(s2);

arr = malloc(l1 + l2 + 1);

if (!arr)
return (0);

for (loop1 = 0; loop1 < l1; loop1++)
{
arr[len] = s1[loop1];
len++;
}

for (loop2 = 0; loop2 < l2; loop2++)
{
arr[len] = s2[loop2];
len++;
}
arr[len] = '\0';
return (arr);


}
