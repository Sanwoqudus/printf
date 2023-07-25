#include "main.h"
/**
 * option_c - Evaluates the format c for _printf
 * @format: Characters
 * @args: A va_lis
 * @buffer: is the space to locate all the string
 * @counter: the counter of original function to count the string
 * Return: characters stored to output
 */

void option_c(const char *format, va_list args, char *buffer, int counter)
{
	char ch = va_arg(args, int);

	if (*format == 'c')
		buffer[counter] = ch;
}
