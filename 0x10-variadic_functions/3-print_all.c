#include "variadic_functions.h"

/**
 * print_int - prints int
 * @list: arguments from print_all
 */
void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 * print_float - prints float
 * @list: arguments from print_all
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_char - prints int
 * @list: arguments from print_all
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_str - prints string
 * @list: arguments from print_all
 */
void print_str(va_list list)
{
	char *s = va_arg(list, char *);

	s == NULL ? printf("(nil)") : printf("%s", s);

}

void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	char *separate = "";
	va_list list;
    

	printTypeStruct data_types[] = {{"c", print_char},
									{"i", print_int},
									{"f", print_float},
									{"s", print_str},
									{NULL, NULL,}} ;

	va_start (list, format);     
           
	while (format && format[i])
	{
		j = 0;

		while (j < 4)
		{
			if (*data_types[j].type == format[i])
			{
				printf("%s",separate);
				data_types[j].caller(list);
				separate = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);

}
