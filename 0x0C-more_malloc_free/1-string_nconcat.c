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
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *arr;
unsigned int l1 = 0, l2 = 0;
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

if (n >= l2)
n = l2;

arr = malloc(l1 + n + 1);

if (!arr)
return (0);

for (loop1 = 0; loop1 < l1; loop1++)
{
arr[len] = s1[loop1];
len++;
}

for (loop2 = 0; loop2 < n; loop2++)
{
arr[len] = s2[loop2];
len++;
}
arr[len] = '\0';
return (arr);


}
