#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

void i_print(va_list i)
{
	printf("%d", va_arg(i, int);
}

void c_print(va_list i)
{
	printf("%c", va_arg(i, char);
}

void f_print(va_list i)
{
	printf("%f", va_arg(i, float);
}

void s_print(va_list i)
{
	if (va_arg(i, char *) == NULL)
		printf("(nil");
	else
		printf("%s", va_arg(i, char *);
}

typedef struct print
{
	char var;
	void (*func)(va_list);
}print_t;

void print_one(char a, va_list ap)
{
	int i;
	print_t list[] = {
		{'c', i_print},
		{'i', c_print},
		{'f', f_print},
		{'s', s_print},
		{NULL, NULL},
	};

	i = 0;
	while (i < 4)
	{
		if (a = list.var[i])
			list.func[i](ap);
		i++;
	}
}


/**
 * print_all - print any type
 * @format - type of variable to print
 * Return: void
 **/
void print_all(const char * const format, ...)
{
	int i;

	i = 0;
	while (i < for
}
