#ifndef HOLBERTON
#define HOLBERTON
#include <stdarg.h>
#include <unistd.h>
/**
 * struct type - struc of format to printf
 * @s: a the character to found.
 * @f: A pointer to the function for printf.
 */
typedef struct type
{
	char s;
	void (*f)(va_list arg, int *byte);
} ty;
int _printf(const char *format, ...);
void ini_char(va_list arg, int *bytes);
void ini_intd(va_list arg, int *bytes);
void ini_string(va_list arg, int *bytes);
int bytes_count(char *s);
int _putchar(char c);
void checkformat(const char *format, int *bytes);
#endif /*HOLBERTON*/
