#include "main.h"
/**
  *get_size - a func that calc size of arg casted
  *@format: str formed in which the args are printed
  *@i: args list to print
  *Return: sizes got
  */
int get_size(const char *format, int  *i)
{
int curr_a = *i + 1;
int size = 0;

if (format[curr_a] == 'l')
{
size = S_LONG;
}
else if (format[curr_a] == 'h')
{
size = S_SHORT;
}
if (size == 0)
{
*i = curr_a - 1;
}
else
*i = curr_a;
return (size);
}
