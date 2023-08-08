#include "main.h"

/**
 * _strlen - length of a string
 * @s: input char
 * Return: length of a string
 */

int strlen (char *str)
{
int length=0;
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
char * arr;
int l1,l2;
int len = 0;
int loop1,loop2;
  

if (!s1)
s1 = "";
else
l1=strlen(s1);

if (!s2)
s2 = "";
else
l2=strlen(s2);

arr = malloc (l1 + l2 + 1);

if (!arr)
return (NULL);

for (loop1 = 0; loop1 < l1; loop1++)
{
arr[len]=s1[loop1];
len++;
}

for (loop2 = 0; loop2 < l2; loop2++)
{
arr[len]=s2[loop2];
len++;
}

return (arr);


}
