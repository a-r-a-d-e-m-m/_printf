#include "main.h"

/**
 * print_unsigned - _printf's an unsigned number
 * @types: Lists all of arguments
 * @buffer: Buffer array to handle printing
 * @flags:  Calculates the active flags
 * @width: gets the width
 * @precision: specifies the precision
 * @size: specifies the Size
 * Return: Number of characters printed.
 */

int print_unsigned(va_list types, char buffer[], int flags,
		   int width, int precision, int size)

{
int i = BUFF_SIZE - 2;
unsigned long int num = va_arg(types, unsigned long int);

num = convert_size_unsgnd(num, size);

if (num == 0)
{
buffer[--i] = '0';
buffer[BUFF_SIZE - 1] = '\0'; }

while (num > 0)
{
buffer[--i] = (num % 10) + '0';
num /= 10; }

++i;

return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}

/**
 * print_octal - _printf an unsigned number in octal notation
 * @types: Lists of all arguments
 * @buffer: The buffer array to handle print
 * @flags: Calculates the active flags
 * @width: gets the width
 * @precision: specifies the precision.
 * @size: specifier of size
 * Return: No of characters printed
 */

int print_octal(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
int i = BUFF_SIZE - 2;
unsigned long int num = va_arg(types, unsigned long int);
unsigned long int init_num = num;

UNUSED(width);
num = convert_size_unsgnd(num, size);

if (num == 0)
buffer[--i] = '0';
buffer[BUFF_SIZE - 1] = '\0';

while (num > 0)
{
buffer[--i] = (num % 8) + '0';
num /= 8; }

if (flags & F_HASH && init_num != 0)
buffer[--i] = '0';
++i;

return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}

/**
 * print_hexadecimal - prints an unsigned number in hexadecimal notation
 * @types: Lists of the arguments
 * @buffer: Buffer array to the handle print
 * @flags: Calculates the active flags
 * @width: gets the width
 * @precision: specification for precision
 * @size: specifier for size
 * Return: Numero of characters printed
 */

int print_hexadecimal(va_list types, char buffer[], int flags,
		      int width, int precision, int size)
{
return (print_hexa(types, "0123456789abcdef", buffer, flags,
		   'x', width, precision, size)); }

/**
 * print_hexa_upper - prints an unsigned number in upper hexadecimal notation
 * @types: lists of the arguments
 * @buffer: buffer array to handle printing
 * @flags:  calculates the active flags
 * @width: gets the width
 * @precision: specification for precision
 * @size: specifier for size
 * Return: numero of characters printed
 */

int print_hexa_upper(va_list types, char buffer[], int flags,
		     int width, int precision, int size)
{
return (print_hexa(types, "0123456789ABCDEF", buffer,
		   flags, 'X', width, precision, size)); }


/**
 * print_hexa - prints a hexadecimal number in either lower or upper
 * @types: lists of the arguments
 * @map_to: array of the values to map the number to
 * @buffer: buffer array to handle printing
 * @flags: calculates active flags
 * @flag_ch: calculates active flags
 * @width: gets the width
 * @precision: specification for precision
 * @size: specifier for size
 * Return: numero of characterss printed
 */

int print_hexa(va_list types, char map_to[], char buffer[],
	       int flags, char flag_ch, int width, int precision, int size)
{
int i = BUFF_SIZE - 2;
unsigned long int num = va_arg(types, unsigned long int);
unsigned long int init_num = num;

UNUSED(width);
num = convert_size_unsgnd(num, size);

if (num == 0)
buffer[--i] = '0';
buffer[BUFF_SIZE - 1] = '\0';

while (num > 0)
{
buffer[--i] = map_to[num % 16];
num /= 16; }

if (flags & F_HASH && init_num != 0)
{
buffer[--i] = flag_ch;
buffer[--i] = '0'; }

++i;

return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}
