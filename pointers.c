#include "main.h"

/**
 * print_pointer - print a pointer in hexadecimal form at
 * @ptr: pointer to be printed
 * Return: count of printed characters
 */
int print_pointer(void *ptr)
{
	char buffer[18];
	int char_count = 0;

	buffer[0] = '0';
	buffer[1] = x;

	for (int i = 0; i < 16; i++)
	{
		unsigned char n = ((unsigned char *)ptr)[i];

		buffer[i + 2] = "0123456789ABCDEF"[n >> 4];
		buffer[i + 3] = "0123456789ABCDEF"[n & 0x0F];
	}
	buffer[18] = '\0';

	char_count += print_string(buffer);
	return (char_count);
}
