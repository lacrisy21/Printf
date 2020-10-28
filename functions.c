#include "holberton.h"
void ini_char(va_list arg, int *bytes)
{
	char character;
	character = (char) va_arg(arg, int);
	write(1,&character,1);
	(*bytes)++;
}
void ini_string(va_list arg, int *bytes)
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
		write(1,"(null)", 7);
}





