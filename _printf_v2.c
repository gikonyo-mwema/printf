#include "main.h"

/**
 * _printf - Parameters for printf
 * @format: list of arguments
 * Return: Printed characters count
 */
int _printf(const char *format, ...)
{
	int char_count = 0;
	va_list args_list;
	char buffer[BUFFER_SIZE];
	int buffer_ind = 0;

	if (format == NULL)
		return (-1);
	va_start(args_list, format);
	char_count = processFormat(format, args_list);
	va_end(args_list);
	return (char_count);
}

/**
 * processFormat - Process and print formatted output
 * @format: List of format specifiers
 * @args_list: List of arguments
 * Return: Count of printed characters
 */
int processFormat(const char *format, va_list args_list)
{
	int char_count = 0;
	int i = 0;

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			char_count++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
				break;
			if (format[i] == '%')
			{
				_putchar('%');
				char_count++;
			}
			else
			{
				char_count += processSpecifier(format[i], args_list);
			}
		}
		i++;
	}
	return (char_count);
}

/**
 * processSpecifier - Process individual format specifier
 * @specifier: Format specifier character
 * @args_list: List of arguments
 * Return: Count of printed characters for this specifier
 */
int processSpecifier(char specifier, va_list args_list)
{
	int char_count = 0;

	switch (specifier)
	{
		case 'c':
			{
				char c = va_arg(args_list, int);

				_putchar(c);
				char_count++;
				break;
			}
		case 's':
			{
				char *str = va_arg(args_list, char*);

				char_count += printString(str);
				break;
			}
		case 'd':
		case 'i':
			{
				int num = va_arg(args_list, int);

				char_count += print_integer(num, &char_count);
				break;
			}
		case 'b':
			{
				unsigned int num = va_arg(args_list, unsigned int);

				char_count += printBinary(num);
				break;
			}
		case 'S':
			{
				char *str = va_arg(args_list, char *);
				char_count += printString(str);
			}
		case 'p':
			{
				void *ptr = va_arg(args_list, void *);

				char_count += printPointer(ptr);
			}
	}
	return (char_count);
}
