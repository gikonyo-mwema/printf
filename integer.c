#include "main.h"

/**
 * print_integer - print integer
 * @num: prints numbers
 * @char_print: pointer
 *
 * Return: 0
 */
int print_integer(int num, int *char_print)
{
	char num_str[12];
	int num_len = snprintf(num_str, sizeof(num_str), "%d", num);

	write(1, num_str, num_len);
	(*char_print) += num_len;
	return (0);
}
