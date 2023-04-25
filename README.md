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
