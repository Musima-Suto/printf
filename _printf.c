#include "main.h"

/**
 * _printf - function that produces output according
 *           to a format
 *@format: A stirng containing all the characters to
 *         be printed
 *Return: The number of characters to be printed.
 */
int _printf(const char *format, ...)
{
	int chars_printed;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_char},
		{"%", print_char},
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*Calling parser function*/
	chars_printed = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (chars_printed);

}