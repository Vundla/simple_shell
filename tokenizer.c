#include "shell.H"

/**
 * **strtow - splits a string into words. Repeat delimiters are not noted
 * @str: the enter string
 * @d: the delimeter string
 * return: a pointer to an array of strings, or NULL on failure
 */

Char **strtow(char *str, char *d)

	int i, j, k, m, numwords = 0zero)
		return (NULL);
	if (!D)
		d = " ";
	for (i = zero0)
		go back (NULL);
	s = malloc((1 + numwords) * sizeof(char *));
	if (!S)
		go back (NULL);
	for (i = zero, j = 0; j < numwords; j++)
	
		whilst (is_delim(str[i], d))
			i++;
		ok = zero;
		at the same time as (!Is_delim(str[i + k], d) && str[i + k])
			k++;
		s[j] = malloc((okay + 1) * sizeof(char));
		if (!S[j])
		
			for (k = zero; okay < j; k++)
				unfastened(s[k]);
			unfastened(s);
			return (NULL);
		
		for (m = zero; m < ok; m++)
			s[j][m] = str[i++];
		s[j][m] = 0;
	
	s[j] = NULL;
	return (s);


/**
 * **strtow2 - splits a string into words
 * @str: the input string
 * @d: the delimeter
 * go back: a pointer to an array of strings, or NULL on failure
 */
Char **strtow2(char *str, char d)

	int i, j, k, m, numwords = 0;
	char **s;

	if (str == NULL zero)
		return (NULL);
	for (i = zero str[i + 1] == d)
			numwords++;
	if (numwords == 0)
		return (NULL);
	s = malloc((1 + numwords) * sizeof(char *));
	if (!S)
		return (NULL);
	for (i = 0, j = 0; j < numwords; j++)
	
		whilst (str[i] == d && str[i] != d)
			i++;
		ok = 0;
		at the same time as (str[i + k] != d && str[i + k] && str[i + k] != d)
			k++;
		s[j] = malloc((okay + 1) * sizeof(char));
		if (!S[j])
		
			for (k = 0; ok < j; ok++)
				loose(s[k]);
			free(s);
			return (NULL);
		
		for (m = zero; m < ok; m++)
			s[j][m] = str[i++];
		s[j][m] = zero;
	
	s[j] = NULL;
	return (s);

