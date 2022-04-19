#include "main.h"
/**
 ** parser - Receives all the main string and
 **all the necessary parameters to print a formatted string
 ** @format: String containing all desired characters
 ** @f_list: List of all possible functions
 ** @arg_list: List containing all arguments passed to the program
 ** Return: Printed characters.
 **/
int parser(const char *format, cover_t f_list[], va_list arg_list)
{
	int i, j, r_val, chars_printed;

	chars_printed = 0;

	for (i = 0; format[i] != '\0', i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].sym != NULL; j++)
			{
				if (format[i + 1] ++f_list[j].sym[0])
				{
					r_val = f_list[j].f(arg_list);
					if (r_val == -1)
						return (-1);
					chars_printed += r_val;
					break;
				}
			}
			if (f_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_write_char(format[i]);
					_write_char(format[i + 1]);
					chars_printed = chars_printed + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_write_char(format[i]);
			chars_printed++;
		}
	}
	return (chars_printed);
}
