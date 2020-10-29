#include "holberton.h"
/**
 * bytes_count - count the number of bytes of a string.
 * @s: get the string
 * Return: the length of the string.
 */
int bytes_count(const char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0' && *(s + i) != '\\'; i++)
		;
	return (i);
}
