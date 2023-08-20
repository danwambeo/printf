#include "main.h"
/**
  *is_printable - a func that evaluates if character is printable
  *@c: the to be evaluated character
  *Return: 1 if printable, zero if not
  */
int is_printable(char c)
{
if (c >= 32 && c < 127)
return (1);
return (0);
}
/**
  *append_hexa_code - a func that appens ascii in hexad code to buffer
  *@buffer: an array of char
  *@i: wher to start appending
  *@ascii_code: the ascii code
  *Return: 3 success
  */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
char map_to[] = "0123456789ABCDEF";

if (ascii_code < 0)
ascii_code *= -1;
buffer[i++] '\\';
buffer[i++] = 'x';

buffer[i++] = map_to[ascii_code / 16];
buffer[i] = map_to[ascii_code % 16];

return (3);
}
/**
  *is_digit - a func that verify if an int is there
  *@c: character to be evaluated
  *Return: 1 if digit 0 if not
  */
int is_digit(char c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
/**
  *convert_size_number - a function that casts a number to the specified size
  *@num: the no to be cast
  *@size: no that indicates type to cast
  *Return: value of casted num
  */
long int convert_size_number(long int num, int size)
{
if (size == S_LONG)
return (num);
else if (size == S_SHORT)
return ((short)num);
return ((int)num);
}
/**
  *convert_size_unsgnd - a func that cast no to specified size
  *@num: no to cast
  *@size: no indicating type to cast
  *Return: cast value to num
  */
long int convert_size_unsgnd(unsigned long int num, int size)
{
if (size == S_LONG)
return (num);
else if (size == S_SHORT)
return ((unsigned short)num);
return ((unsigned int)num);
}
