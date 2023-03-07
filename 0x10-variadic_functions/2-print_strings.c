#include "variadic_functions.h"

/**
 *print_strings - prints string arguments after n
 *@separator: string to print between strings
 *@n: number of strings after n
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list list;
	unsigned int i;
	char *pointer;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		pointer = va_arg(list, char *);

		if (pointer == NULL)
			printf("(nil)");
		else
			printf("%s", pointer);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		else if (i == (n - 1))
			printf("\n");

	}
	va_end(list);
}
