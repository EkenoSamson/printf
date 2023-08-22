#ifndef _PRINTF_H_
#define _PRINTF_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * placer_holder - struct for placeholders.
 * @placer: the placeholder
 * @func_p: pointer to the function.
 */

/*
typedef struct placer_holder
{
	char *placer;
	int (*func_p)(va_list arguments);
}placer_t;
*/

int _printf(const char *format, ...);
size_t _strlen(char *str);
int perc_placer(char *format);
int char_placer(va_list arguments);
int bin_placer(va_list arguments);
int str_placer(va_list arguments);
int (*get_specifier(char c))(va_list);
int dec_placer(va_list arguments);
int int_print(long int x, int *count);
void char_print(char c);
int int_bin(int x, int *count);


#endif /* _PRINTF_H_ */
