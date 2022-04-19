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
	int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*Calling parser function*/
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);

}
