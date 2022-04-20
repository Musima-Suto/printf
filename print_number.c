#include "main.h"
/**
 *print_number - prints a number send to this function
 *@args: List of arguments
 *Return: The number of arguments printed
 */
int print_number(va_list args)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _write_char('-');
		num = n * -1;
	}
	else
		num = n;
