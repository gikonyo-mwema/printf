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
	{
		str = "(null)";
		while (*str != '\0')
		{
			if (*str < 32 || *str >= 127)
			{
				char_count += _putchar('\\');
				char_count += _putchar('x');
				char_count += _putchar("0123456789ABCDEF"[((unsigned char)*str >> 4)]);
				char_count += _putchar("0123456789ABCDEF"[((unsigned char)*str & 0xF)]);
			}
			else
			{
				char_count += _putchar(*str);
			}
			str++;
		}
	}
	return (char_count);
}
