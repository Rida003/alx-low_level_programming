#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct print_ops - struct use to match the operator
 * with correlating function
 * @op: string represention of the operator.
 * @f: function pointer for the operation to be used.
 */
typedef struct print_ops
{
	char *op;
	void (*f)(va_list);
} p_op;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void pr_int(va_list);
void pr_char(va_list);
void pr_float(va_list);
void pr_str(va_list);

#endif
