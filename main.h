#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 1024
int _putchar(char c);

int _printf(const char *format, ...);
int print_integer(int num, int *char_print);
int printString(const char *str);
int print_char(char c, int *char_print);
int printBinary(unsigned int num);
int _putchar(char c);
void print_integer_b(int num, int base, int *char_print);


int print_pointer(void *ptr);

int processSpecifier(char specifier, va_list args_list);
int processFormat(const char *format, va_list args_list);

#endif
