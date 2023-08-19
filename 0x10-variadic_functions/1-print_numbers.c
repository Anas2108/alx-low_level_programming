#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *passed_string;
	va_list string;
	va_start (string, n);
    
	for (i = 0; i < n; i++)
	{
		passed_string = va_arg (string, char *);
			if (passed_string != NULL)
				printf("%s", passed_string);

			else
				printf("(nil)");


			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
    }
	va_end(string);

	putchar('\n');
}

