#include "main.h"
#include <stdlib.h>

/**
 * _puts - function that prints a string.
 * @str: string variable
 */

void _puts(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	{
		_putchar(str[string]);
	}
	_putchar('\n');
}
