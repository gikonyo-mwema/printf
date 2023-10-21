#include "main.h"

void print_integer_base(int num, int base, int *char_print)
{
	char num_str[12];
	int num_len = 0;
	char digits[] = "0123456789ABCDEF";

	if (num == 0)
	{
		num_str[num_len++] = '0';
	}
	else
	{
		if (num < 0)
		{
			num_str[num_len++] = '-';num = -num;
        }

        while (num > 0) {
            int digit = num % base;
            num_str[num_len++] = digits[digit];
            num /= base;
        }

        // Reverse the string to get the correct order
        for (int i = 0, j = num_len - 1; i < j; i++, j--) {
            char temp = num_str[i];
            num_str[i] = num_str[j];
            num_str[j] = temp;
        }
    }

    write(1, num_str, num_len);
    *char_print += num_len;
}
