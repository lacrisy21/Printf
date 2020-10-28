#include "holberton.h"
/**
 * _printf - Function that manage the form to printf.
 * @format: firts parameter of _printf funciton.
 * Return: the number of bytes or -1.
 */
int _printf(const char *format, ...)
{
	ty ind_map[] = {
		{'c', ini_char}, {'s', ini_string},
		{'d', ini_intd}, {'i', ini_intd}, {'\0', NULL},
	};
	int byte = 0, counter = 0, *bytes = &byte;
	char character;
	va_list arg;

	va_start(arg, format);
	while (format && *format)
	{
		while (*format != '\0' && *format != '%')
		{
			character = *format;
			_putchar(character);
			(*bytes)++, format++;
		}
		while (format && *format == '%')
		{
			format++;/* go through the structure */
			if (*format == '%')
			{
				character = *format;
				write(1, &character, 1);
				break;
			}
			while (ind_map[counter].s) /*match the format with the structure */
			{
				if (ind_map[counter].s == *format)
				{
					ind_map[counter].f(arg, bytes), format++;
					break;
				}
				counter++;
				if (ind_map[counter].s == '\0')
					return (-1);
			}
		}
	}
	return (byte);
}
