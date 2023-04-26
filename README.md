The Printf project.
 This is the first group project at ALX tasking both contributors with creating a replica function(_printf) that performs the same operations as the C Standard output function printf.


The Stdio.h Library

 The stdio.h is a standard library header file that allows programmers to access and use I/O(input and output) functions to perform various input and output operations in a C program. The printf() function and scanf() function display output and receive input from a user.


What is the printf () function?
 The printf() is one of the main output functions in the C programming language. The printf() function writes to standard output(stdout) in C. The Standard output(stdout) is a stream(a sequence of characters moving from one place to another) where data flows from memory to an output device(monitor, file, or printer.)

       		       Format of a printf function
 The basic format of a printf function call is;
     	   printf (format_string, expressions_list);
Where:
	● Format_string: is the layout of the data to be printed
	● Expression_list: a comma-separated list of variables or expressions with results to be placed into the output.


Conversion Specifiers
 Conversion specifiers also known as format specifiers are symbols that are used as placeholders in a formatting string. Format specifiers are used in the printf() function to tell the compiler what type of data the variable is storing.
 The format string starts with a (%) sign followed by a character. It ranges from %d(integer), %c(character), %f(float), %s(string). Below is a table, detailing the various format specifiers and their functions.

Specifiers 	  Function    	      	 	     Example
%c 	   	  Used to output a single character  A
%s 	   	  Used to output a string  	     Codingisfun
%d or %i 	  Single decimal integer 	     5
%f    		  Floating point 		     3.5
%u 		  Unsigned decimal integer	     98
%o 		  octal(base 8) integer 	     5523
%x 		  hexadecimal(base 16) integer 	     36264eb


		  		   Return value
Upon compilation, the total number of characters written is returned on success. However, if a writing error occurs, the error indicator is set and a negative number is returned.


          		      THE TASKS
Task 0: Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%


Task 1:Handle the following conversion specifiers:

d
i


Task 2: Handle the following custom conversion specifiers:

b: the unsigned int argument is converted to binary


Task 3: Handle the following conversion specifiers:

u
o
x
X


Task 4: Use a local buffer of 1024 chars in order to call write as little as possible.


Task 5: Handle the following custom conversion specifier:

S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)


Task 6: Handle the following conversion specifier: p.


Task 7: Handle the following flag characters for non-custom conversion specifiers:

+
space
#


Task 8: Handle the following length modifiers for non-custom conversion specifiers:

l
h
Conversion specifiers to handle: d, i, u, o, x, X


Task 9: Handle the field width for non-custom conversion specifiers.


Task 10: Handle the precision for non-custom conversion specifiers.


Task 11: Handle the 0 flag character for non-custom conversion specifiers.


Task 12: Handle the - flag character for non-custom conversion specifiers.


Task 13: Handle the following custom conversion specifier:

r : prints the reversed string


Task 14: Handle the following custom conversion specifier:

R: prints the rot13'ed string


Task 15: All the above options work well together.