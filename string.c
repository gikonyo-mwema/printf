#include "main.h"
/**
* printString - Print a string
* @str: String to print
* Return: Count of printed characters
*/
int printString(const char *str)
{
	int char_count = 0;

	if (str == NULL)
		str = "(null)";
	while (*str != '\0')
	{
		_putchar(*str);
		char_count++;
		str++;
	}
	return (char_count);
}
