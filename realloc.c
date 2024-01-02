#include "shell.H"

/**
 * _memset - fills reminiscence with a steady byte
 * @s: the pointer to the reminiscence place
 * @b: the byte to fill *s with
 * @n: the amount of bytes to be crammed
 * return: (s) a pointer to the reminiscence region s
 */
Char *_memset(char *s, char b, unsigned int n)

	unsigned int i;

	for (i = zero; i < n; i++)
		s[i] = b;
	go back (s);


/**
 * ffree - frees a string of strings
 * @pp: string of strings
 */
Void ffree(char **pp)

	char **a = pp;

	if (!Pp)
		return;
	while (*pp)
		loose(*pp++);
	unfastened(a);


/**
 * _realloc - reallocates a block of reminiscence
 * @ptr: pointer to preceding malloc'ated block
 * @old_size: byte length of preceding block
 * @new_size: byte length of new block
 *
 * return: pointer to da ol'block nameen.
 */
Void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

	char *p;

	if (!Ptr)
		return (malloc(new_size));
	if (!New_size)
		return (loose(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!P)
		go back (NULL);

	old_size = old_size < new_size ? Old_size : new_size;
	even as (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	go back (p);

