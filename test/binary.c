#include "main.h"
/**
 * print_binary - prints b convesion specifiers
 *
 * @num: number to be converted t binary
 * @char_print: pointer
 *
 * Return: 0 Always
 *
 */
void print_binary(unsigned int num, int *char_print)
{
	char binary[33];
	int i;

	for (i = 31; i >= 0; i--)
	{
		binary[31 - i] = ((num >> i) & 1) + '0';
	}
	binary[32] = '\0';

	write(1, binary, 32);
	char_print += 32;
}
