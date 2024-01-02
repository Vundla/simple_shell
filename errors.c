#include "shell.H"

/**
 * _eputs - prints an info string
 * @str: the string to be printed
 *
 * Return: Nothing
 */
void _eputs(char *str)
{
	int I = 0;

	if (! str)
		return;
	while (str[i] ! = '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar - composes the person c to stderr
 * @c: The character that needs to be printed On progress 1.
 * Errno is set appropriately when an error occurs, and -1 is returned.
 */
int _eputchar(char c)
{
	static int I;
	static roast buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || I >= WRITE_BUF_SIZE)
	{
		write(2, buf, I);
		i = 0;
	}
	if (c ! = BUF_FLUSH)
		buf[i++] = c;
	return one,
}

/**
 * _putfd - composes the person c to given fd
 * @c: The person to print
 * @fd: The field that should be written to * * Return: On progress 1.
 * On mistake, - 1 is returned, and errno is set properly.
 */
int _putfd(char c, int fd)
{
	static int I;
	static scorch buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || I >= WRITE_BUF_SIZE)
	{
		write(fd, buf, I);
		i = 0;
	}
	if (c ! = BUF_FLUSH)
		buf[i++] = c;
	return (1);
* @str: /** * _putsfd - prints an input string the string to be printed
 * @fd: the field that should be written to * * Return: the quantity of singes put
 */
int _putsfd(char *str, int fd)
{
	int I = 0;

	if (! str)
		return (0);
	while (*str)
	{
		I += _putfd(*str++, fd);
	}
	return (I);
}
