#include "main.h"

/**
 * print_char - function to write to standard output
 * @c: parameter
 * @char_print: character to be printed
 *
 * Return: always 0
 */
int print_char(char c, int *char_print)
{
	write(1, &c, 1);
	(*char_print)++;
	return (0);
}
