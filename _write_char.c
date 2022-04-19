#include "main.h"
/**
 ** _write_char - writes the character
 ** @c: Character to be printed
 ** Return: On success 1.
 ** On error, -1 is returned, and errno is set appropriately
 **/
int _write_char(char c)
{
	return (write(1, &c, 1));
}
