#include <stdarg.h>
#include <unistd.h>

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

    for (ptr = format; *ptr != '\0'; ptr++) {
        if (*ptr == '%') {
            ptr++;
            if (*ptr == '\0') {
                va_end(args);
                return (-1); /* Invalid: single % at end */
            }
            if (*ptr == 'c') {
                char c = va_arg(args, int);
                write(1, &c, 1);
                count++;
            } else if (*ptr == 's') {
                char *str = va_arg(args, char *);
                int i;

                if (!str)
                    str = "(null)";

                for (i = 0; str[i] != '\0'; i++)
                    write(1, &str[i], 1);

                count += i;
            } else if (*ptr == '%') {
                write(1, "%", 1);
                count++;
            } else {
                write(1, "%", 1);
                write(1, ptr, 1);
                count += 2;
            }
        } else {
            write(1, ptr, 1);
            count++;
        }
    }

    va_end(args);

    return (count);
}

