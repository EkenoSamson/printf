#include "main.h"

/**
 * _printf - simple printf.
 * authors: Ekeno and Bobai.
 * @format: pointer to string inputed by the user.
 * Return: number of characters printed excluding null terminator.
 */

int _printf(const char *format, ...)
{
	int total_characters = 0, iterator = 0;
	va_list arguments;
	char hdr;
	int (*fun_p)(va_list);

	if (format == NULL)
		return (-1);
	va_start(arguments, format);

	while (format[iterator])
	{
		if (format[iterator] == '%')
		{
			iterator++;
			hdr = format[iterator];

			if (hdr == '%')
			{
				write(1, &hdr, 1);
				total_characters += 1;
				iterator++;
			}
			else if (hdr == 'c' || hdr == 's' || hdr == 'd' || hdr == 'b' || hdr == 'i')
			{
				fun_p = get_specifier(hdr);
				total_characters = total_characters + fun_p(arguments);
				iterator++;
			}
			else
				return (-1);
		}
		else
		{
			write(1, (format + iterator), 1);
			total_characters += 1;
			iterator++;
		}
	}
	va_end(arguments);
	return (total_characters);
}
