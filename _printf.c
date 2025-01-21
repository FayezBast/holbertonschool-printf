#include <stdarg.h>
#include <unistd.h>

/**
 * print_char - Prints a single character.
 * @args: The argument list.
 *
 * Return: The number of characters printed.
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);
	write(1, &c, 1);
	return (1);
}

/**
 * print_string - Prints a string.
 * @args: The argument list.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i;

	if (!str)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		write(1, &str[i], 1);

	return (i);
}

/**
 * print_percent - Prints a percent sign.
 *
 * Return: The number of characters printed.
 */
int print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

/**
 * handle_specifier - Handles format specifiers.
 * @specifier: The format specifier character.
 * @args: The argument list.
 *
 * Return: The number of characters printed.
 */
int handle_specifier(char specifier, va_list args)
{
	if (specifier == 'c')
		return (print_char(args));
	else if (specifier == 's')
		return (print_string(args));
	else if (specifier == '%')
		return (print_percent());
	else
	{
		write(1, "%", 1);
		write(1, &specifier, 1);
		return (2);
	}
}

/**
 * _printf - Produces output according to a format.
 * @format: A character string containing directives.
 *
 * Return: The number of characters printed (excluding null byte),
 *         or -1 for invalid input.
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	const char *ptr;

	if (!format)
		return (-1);

	va_start(args, format);

	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == '\0')
			{
				va_end(args);
				return (-1); /* Invalid: single % at end */
			}
			count += handle_specifier(*ptr, args);
		}
		else
		{
			write(1, ptr, 1);
			count++;
		}
	}

	va_end(args);

	return (count);
}

