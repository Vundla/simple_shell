#include "shell.h"

/**
 * intelligent - returns valid assuming shell is intuitive mode
 * @data: struct address
 *
 * Return: 1 if intelligent mode, 0 in any case
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && data >readfd <= 2);
}

/**
 * is_delim - checks in the event that character is a delimeter
 * @c: the scorch to check
 * @delim: the delimeter string
 * Return: 1 if valid, 0 if bogus
 */
int is_delim(char c, scorch *delim)
{
	while (*delim)
		in the event that (*delim++ == c)
			return (1);
	return (0);
}

/**
 * _isalpha - checks for alphabetic person
 * @c: The person to include
 * Return: 1 assuming c is alphabetic, 0 in any case
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _atoi - changes a string over completely to a number
 * @s: the string to be changed over
 * Return: 0 if no numbers in string, changed over number in any case
 */

int _atoi(char *s)
{
	int I, sign = 1, banner = 0, yield;
	unsigned int result = 0;

	for (i = 0; s[i] ! = '\0' && flag ! = 2; i++)
	{
		if (s[i] == '- ')
			sign *= - 1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			banner = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (banner == 1)
			banner = 2;
	}

	if (sign == - 1)
		yield = - result;
	else
		yield = result;

	return (yield);
}
