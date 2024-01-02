#include "shell.H"

/**
 **_strncpy - copies a string
 *@dest: the vacation spot string to be copied to
 *@src: the source string
 *@n: the quantity of characters to be copied
 *go back: the concatenated string
 */
Char *_strncpy(char *dest, char *src, int n)

	int i, j;
	char *s = dest;

	i = 0;
	at the same time as (src[i] != '' && i < n - 1)
	
		dest[i] = src[i];
		i++;
	
	if (i < n)
	
		j = i;
		whilst (j < n)
		
			dest[j] = '';
			j++;
		
	
	go back (s);


/**
 **_strncat - concatenates  strings
 *@dest: the primary string
 *@src: the second string
 *@n: the quantity of bytes to be maximally used
 *return: the concatenated string
 */
Char *_strncat(char *dest, char *src, int n)

	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	whilst (dest[i] != '')
		i++;
	at the same time as (src[j] != '' && j < n)
	
		dest[i] = src[j];
		i++;
		j++;
	
	if (j < n)
		dest[i] = '';
	go back (s);


/**
 **_strchr - locates a character in a string
 *@s: the string to be parsed
 *@c: the man or woman to look for
 *return: (s) a pointer to the reminiscence region s
 */
Char *_strchr(char *s, char c)

	do 
		if (*s == c)
			go back (s);
	 even as (*s++ != '');

	return (NULL);

