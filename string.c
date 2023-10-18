#include "main.h"
/**
 * print_string - prints string
 * @str: string to be printed
 * @char_print: pointer
 *
 * Return: Always 0
 */
int print_string(char *str, int *char_print)
{
	int str_len = 0;

	while (str[str_len] != '\0')
		str_len++;
	write(1, str, str_len);
	(*char_print) += str_len;
	return (0);
}
