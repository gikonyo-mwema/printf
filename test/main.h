#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int print_integer(int num, int *char_print);
int print_string(char *str, int *char_print);
int print_char(char c, int *char_print);
void print_binary(unsigned int num, int *char_print);
#endif
