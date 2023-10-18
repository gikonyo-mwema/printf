#include "main.h"

 /**
  * _printf - main function file
  *
 * @format: pointer to format
 *
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int char_print = 0;
	va_list args_list;

	if (format == NULL)
		return (-1);

	va_start(args_list, format);

	while (*format)
	{
		if (*format != '%')
		{
			print_char(*format, &char_print);
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				print_char('%', &char_print);
			}
			else if (*format == 'c')
			{
				char c = va_arg(args_list, int);

				print_char(c, &char_print);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args_list, char *);

				print_string(str, &char_print);
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args_list, int);

				print_integer(num, &char_print);
			}
		}
		format++;
	}
	va_end(args_list);
	return (char_print);
}
