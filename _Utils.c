#include "main.h"

/**
 * is_printable - this checks if a character is printable
 * @c: this is the char to be evaluated.
 * * Return: 1 if @c is printable, else 0
 */

int is_printable(char c)
{
if (c >= 32 && c < 127)
return (1);

return (0); }

/**
 * append_hexa_code - this appends the ASCII in hexadecimal code to buffer
 * @buffer: this an array of characters.
 * @i: the index to start appending at.
 * @ascii_code: obv ASCII CODE.
 * Return: Should 3
 */

int append_hexa_code(char ascii_code, char buffer[], int i)
{
char map_to[] = "0123456789ABCDEF";

/* Remember: The hexa format code is always 2 digits long */
if (ascii_code < 0)
ascii_code *= -1;

buffer[i++] = '\\';
buffer[i++] = 'x';

buffer[i++] = map_to[ascii_code / 16];
buffer[i] = map_to[ascii_code % 16];

return (3); }


/**
 * is_digit - this verifies if a character is a digit
 * @c: the char will be evaluated
 * Return: 1 if c is a digit, else return 0
 */

int is_digit(char c)
{
if (c >= '0' && c <= '9')
return (1);

return (0); }


/**
 * convert_size_number - this gives a number to the specified size
 * @num: the numba to be casted.
 * @size: the number indicator type to be casted.
 * Return: the casted value of number num
 */

long int convert_size_number(long int num, int size)
{
if (size == S_LONG)
return (num);
else if (size == S_SHORT)
return ((short)num);

return ((int)num); }


/**
 * convert_size_unsgnd - this gives a number to the specified size
 * @num: theNumber to be casted
 * @size: the Number indicating type to be casted
 * Return: the casted value of number num
 */

long int convert_size_unsgnd(unsigned long int num, int size)
{
if (size == S_LONG)
return (num);
else if (size == S_SHORT)
return ((unsigned short)num);

return ((unsigned int)num); }
