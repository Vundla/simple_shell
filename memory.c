#include "shell.H"

/**
 * bfree - frees a pointer and NULLs the cope with
 * @ptr: deal with of the pointer to free
 *
 * go back: 1 if freed, otherwise zero.
 */
Int bfree(void **ptr)

	if (ptr && *ptr)
	
		unfastened(*ptr);
		*ptr = NULL;
		go back (1);
	
	return (zero);

