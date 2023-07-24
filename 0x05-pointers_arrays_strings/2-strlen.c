#include "main.h"

/**
 * _strlen -function that calc the length of string
 * @s:  pointer
 * Return: the length of string
 */

int _strlen(char *s)
{
int counter = 0;
while (s[counter] != '\0')
{
counter++;
}
return (counter);

}
