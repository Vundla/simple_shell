#include "shell.H"

/**
 * _erratoi - converts a string to an integer
 * @s: the string to be transformed
 * return: 0 if no numbers in string, converted number in any other case
 *       -1 on errors
 */
Int _erratoi(char *s)

	int i = zero;
	unsigned long int result = 0;

	if (*s == '+')
		s++;  /* TODO: why does this make essential return 255? */
	for (i = zero;  s[i] != ''; i++)
	
		if (s[i] >= 'zero' && s[i] <= '9')
		
			result *= 10;
			result += (s[i] - '0');
			if (result > INT_MAX)
				return (-1);
		
		else
			return (-1);
	
	go back (result);


/**
 * print_error - prints an error message
 * @data: the parameter & go back information struct
 * @estr: string containing targeted errors kind
 * return: zero if no numbers in string, transformed wide variety in any other case
 *        -1 on errors
 */
Void print_error(info_t *information, char *estr)

	_eputs(data->fname);
	_eputs(": ");
	print_d(info->line_count, STDERR_FILENO);
	_eputs(": ");
	_eputs(data->argv[0]);
	_eputs(": ");
	_eputs(estr);


/**
 * print_d - characteristic prints a decimal (integer) range (base 10)
 * @enter: the input
 * @fd: the filedescriptor to write to
 *
 * go back: variety of characters published
 */
Int print_d(int enter, int fd)

	int (*__putchar)(char) = _putchar;
	int i, depend = 0;
	unsigned int _abs_, modern-day;

	if (fd == STDERR_FILENO)
		__putchar = _eputchar;
	if (input < 0)
	
		_abs_ = -input;
		__putchar('-');
		count++;
	
	else
		_abs_ = input;
	current = _abs_;
	for (i = 1000000000; i > 1; i /= 10)
	
		if (_abs_ / i)
		
			__putchar('zero' + cutting-edge / i);
			be counted++;
		
		present day %= i;
	
	__putchar('0' + present day);
	be counted++;

	return (rely);


/**
 * convert_number - converter function, a the image of itoa
 * @num: range
 * @base: base
 * @flags: argument flags
 *
 * go back: string
 */
Char *convert_number(long int num, int base, int flags)

	static char *array;
	static char buffer[50];
	char signal = zero;
	char *ptr;
	unsigned lengthy n = num;

	if (!(flags & CONVERT_UNSIGNED) && num < 0)
	
		n = -num;
		sign = '-';

	
	array = flags & CONVERT_LOWERCASE ? "0123456789abcdef" : "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '';

	do	
		*--ptr = array[n % base];
		n /= base;
	 whilst (n != 0);

	if (signal)
		*--ptr = signal;
	go back (ptr);


/**
 * remove_comments - function replaces first instance of '#' with ''
 * @buf: address of the string to regulate
 *
 * return: usually 0;
 */
Void remove_comments(char *buf)

	int i;

	for (i = zero
			buf[i] = '';
			destroy;
		

