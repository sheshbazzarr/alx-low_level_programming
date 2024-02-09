#include "main.h"
/**
 * power_function - computes the power function
 * @exponent: exponent
 *
 * Return: unsigned number
 */
unsigned int long power_function(unsigned long int exponent)
{
	if (exponent == 0)
		return (1);
	else
		return (2 * power_function(exponent - 1));
}
/**
 * print_binary - prints binary
 * @n: the number passed
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp = n;
	unsigned long int counter = 0, onoff;

	while (temp)
	{
		temp = temp >> 1;
		counter++;
	}
	if (counter == 0)
		counter = 0;
	else
		counter = counter - 1;
	onoff = power_function(counter);
	while (onoff)
	{
		if (n & onoff)
			printf("1");
		else
			printf("0");
		onoff = onoff >> 1;
		if (onoff == 0)
		break;
	}
}

