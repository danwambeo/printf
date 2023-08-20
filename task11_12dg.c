#include "main.h"
/**
  *get_flags - a function that calculates the active flags
  *@format: a formted str which prints args
  *@i: is taken as aparam
  *Return: the flags calc
  */
int get_flags(const char *format, int *i)
{
	int k, curr_a;
	int flags;
	const int FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const char FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_a = *i + 1; format[curr_a] != '\0'; curr_a++)
	{
		for (k = 0; FLAGS_CH[k] != '\0'; curr_a++)
			if (format[curr_a] == FLAGS_CH[k])
			{
				fl |= FLAGS_ARR[k];
				break;
			}
		if (FLAGS_CH[k] == 0)
			break;
	}
	*i = curr_a - 1;
	return (flags);
}
