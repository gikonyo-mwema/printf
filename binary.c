#include "main.h"
/**
 * printBinary - Print a binary number
 * @num: binary number to print
 * Return: Count of printed characters
 **/
int printBinary(unsigned int num)
{
	int n = sizeof(num) * 8;
	int i = n - 1;

	while (i >= 0)
	{
		char bit = ((num >> i) & 1) ? 'i' : '0';

		_putchar(bit);
		i--;
	}
	return (0);
}
