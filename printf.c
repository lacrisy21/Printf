#include "holberton.h"
#include <stdio.h>
/**
 * _printf - Function that manage the form to printf.
 * @format: firts parameter of _printf funciton.
 * Return: the number of bytes or -1.
 */
int _printf(const char *format, ...)
{
	char const **form = &format;
	int total = 0, *bytes = &total;
	va_list arg;

	va_start(arg, format);
	while (format && *format)
	{
		if (*(format + 0) == '%' && *(format + 1) == '\0')
			return (-1);

		if (*format == '%' && *format)
			check_formequal(form, arg, bytes);
		if (*format != '%' && *format)
			check_formatdifferent(form, bytes);
	}
	return (total);
}
/**
 * check_formatdifferent - check the format to printf.
 * @form: firts parameter of _printf funciton.
 * @bytes: the number of bytes to printf.
 */
void check_formatdifferent(const char **form, int *bytes)
{
	char character;

	while (**form != '%' && **form != '\0')
	{
		character = **form;
		_putchar(character);
		(*bytes)++, (*form)++;
	}
}
/**
 * check_formequal - check the format to printf.
 * @form: firts parameter of _printf funciton.
 * @arg: the argument to inicializate.
 * @bytes: the number of bytes to printf.
 */
void check_formequal(const char **form, va_list arg, int *bytes)
{
		ty ind_map[] = {
		{'c', ini_char}, {'s', ini_string},
		{'d', ini_intd}, {'i', ini_intd}, {'\0', NULL}, };
	int counter = 0;
	char character;

	while (**form != '\0' && **form == '%')
	{
		counter = 0, (*form)++;
		if (**form == '%')
		{
			(*form)--;
			character = **form;
			_putchar(character);
			(*bytes)++, (*form)++;
			character = **form;
			_putchar(character);
			(*bytes)++, (*form)++;
			return;
		}
		while (ind_map[counter].s) /*match the format with the structure */
		{
			if (ind_map[counter].s == **form)
			{
				ind_map[counter].f(arg, bytes), (*form)++;
				break;
			}
			counter++;
		}
	}
	if (ind_map[counter].s == '\0')
	{
		(*form)--;
		character = **form;
		_putchar(character);
		(*bytes)++, (*form)++;
	}
}
