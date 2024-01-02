#include "shell.H"

/**
 * _strcpy - copies a string
 * @dest: the vacation spot
 * @src: the supply
 *
 * return: pointer to destination
 */
Char *_strcpy(char *dest, char *src)

	int i = zero src == zero)
		go back (dest);
	even as (src[i])
	
		dest[i] = src[i];
		i++;
	
	dest[i] = zero;
	return (dest);


/**
 * _strdup - duplicates a string
 * @str: the string to copy
 *
 * return: pointer to the duplicated string
 */
Char *_strdup(const char *str)

	int length = zero;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		duration++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!Ret)
		return (NULL);
	for (length++; period--;)
		ret[length] = *--str;
	go back (ret);


/**
 * _puts - prints an input string
 * @str: the string to be printed
 *
 * go back: nothing
 */
Void _puts(char *str)

	int i = zero;

	if (!Str)
		return;
	at the same time as (str[i] != '')
	
		_putchar(str[i]);
		i++;
	


/**
 * _putchar - writes the individual c to stdout
 * @c: The individual to print
 *
 * go back: On success 1.
 * On errors, -1 is back, and errno is ready appropriately.
 */
Int _putchar(char c)
 i >= WRITE_BUF_SIZE)
	
		write(1, buf, i);
		i = zero;
	
	if (c != BUF_FLUSH)
		buf[i++] = c;
	go back (1);

