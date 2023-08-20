#include "main.h"
/**
  *get_precision - a func that calc prec
  *@format: formed str to print args
  *@i: args to be printed
  *@list: the args list
  *Return: precision
  */
int get_precision(const char *format, int *i, va_list list)
{
	int curr_a = *i + 1;
	int precision = -1;

	if (format[curr_a] != '.')
		return (precision);
	precision = 0;

	for (curr_a += 1; format[curr_a] != '\0'; curr_a++)
	{
		if (is_digit(format[curr_a]))
		{
			precision *= 10;
			precision += format[curr_a] - '0';
		}
		else if (format[curr_a] == '*')
		{
			curr_a++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*i = curr_a - 1;
	return (precision);
}
