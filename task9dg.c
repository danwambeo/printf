#include "main.h"
/**
  *get_width - a fnc that clc width
  *@format: str formated to print args
  *@i: args list
  *@list: the args list
  *Return: width
  */
int get_width(const char *format, int *i, va_list list)
{
	int curr_a;
	int width = 0;

	for (curr_a = *i + 1; format[curr_a] != '\0'; curr_a++)
	{
		if (is_digit(format[curr_a]))
		{
			width *= 10;
			width += format[curr_a] - '0';
		}
		else if (format[curr_a] == '*')
		{
			curr_a++;
			width = va_args(list, int);
			break;
		}
		else
			break;
	}
	*i = curr_a - 1;
	return (width);
}
