#include "holberton.h"
/**
 * ini_char - convert arg to char format
 * @arg: argument from pass to printf.
 * @bytes: pointer to count the numbers of bytes.
 */
void ini_char(va_list arg, int *bytes)/*format to char*/
{
	char character;

	character = (char) va_arg(arg, int);
	write(1, &character, 1);
	(*bytes)++;
}
/**
 * ini_string - convert arg to string format
 * @arg: argument from pass to printf.
 * @bytes: pointer to count the numbers of bytes.
 */
void ini_string(va_list arg, int *bytes)/*format to string*/
{
	char *s;
	int bit = 0;

	s = va_arg(arg, char *);
	if (s != NULL)
	{
		bit = bytes_count(s);
		write(1, s, bit);
		*bytes += bit;
	}
	else
	{
		write(1, "(null)", 6);
		(*bytes) += 6;
	}
}
