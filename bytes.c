#include "holberton.h"
/**
 *
 */
int bytes_count(char *s)
{
	int i;

	for(i = 0;*(s + i) ; i++)
		;
	i++;
	return (i);
}
