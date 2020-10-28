#include "holberton.h"

void ini_intd(va_list arg, int *bytes)
{
	int number, counter, div_int;

	number = va_arg(arg, int);
	div_int = 1;

	if (number < 0)
	{
		_putchar('-');
		(*bytes)++;
	}

	while ((number / div_int) > 9 || (number /div_int) < -9)
	{
		div_int *= 10;
	}
	for (counter = div_int; counter >= 1 || counter <= -1; counter /= 10)
	{
		if (number < 0)
		{
			_putchar((number / counter) % 10 * -1 + '0');
			(*bytes)++;
		}
		else
		{
			_putchar((number / counter) % 10 + '0');
			(*bytes)++;
		}
	}
}