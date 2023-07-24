/**
 * swap_int -function that swap the values
 * @a:  pointer
 * @b:  pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
int temp = *b;
*b = *a;
*a = temp;
}

