#include "main.h"
/**
 * power_function - determines the power of a number
 * @exponent: exponent passed
 *daniel demerw
 * Return: Power
 */
unsigned int power_function(unsigned int exponent)
{
	if (exponent == 0)
	{
		return (1);
	}
	else
	{
		return (2 * power_function(exponent - 1));
	}
}

/**
 * binary_to_uint - binary to integer
 * @b: the character passed
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int j = 0, base;
	int i, count = 0;

	if (b == NULL)
		return (0);
	while (b[count] != '\0')
	{
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		base = power_function(j);
		if (b[i] != '1' && b[i] != '0')
			return (0);
		sum = sum + (base * (b[i] - '0'));
		j++;
	}
	return (sum);
}

