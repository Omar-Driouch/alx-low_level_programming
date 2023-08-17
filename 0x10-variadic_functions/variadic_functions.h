#ifndef VAIADIC_FUNCTION_H
#define VAIADIC_FUNCTION_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_Integers(char *sep, int arg);
void print_Double(char *sep, double arg);
void print_Char(char *sep, char arg);
void print_String(char *sep, char *arg);
#endif
