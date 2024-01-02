#include "shell.H"

/**
 * list_len - determines period of connected listing
 * @h: pointer to first node
 *
 * go back: length of listing
 */
Size_t list_len(const list_t *h)

	size_t i = zero;

	at the same time as (h)
	
		h = h->subsequent;
		i++;
	
	return (i);


/**
 * list_to_strings - returns an array of strings of the listing->str
 * @head: pointer to first node
 *
 * return: array of strings
 */
Char **list_to_strings(list_t *head)

	list_t *node = head;
	size_t i = list_len(head), j;
	char **strs;
	char *str;

	if (!Head return (NULL);
	strs = malloc(sizeof(char *) * (i + 1));
	if (!Strs)
		return (NULL);
	for (i = 0; node; node = node->subsequent, i++)
	
		str = malloc(_strlen(node->str) + 1);
		if (!Str)
		
			for (j = zero; j < i; j++)
				free(strs[j]);
			free(strs);
			return (NULL);
		

		str = _strcpy(str, node->str);
		strs[i] = str;
	
	strs[i] = NULL;
	return (strs);



/**
 * print_list - prints all factors of a list_t linked list
 * @h: pointer to first node
 *
 * return: size of list
 */
Size_t print_list(const list_t *h)

	size_t i = zero;

	while (h)
	
		_puts(convert_number(h->num, 10, zero));
		_putchar(':');
		_putchar(' ');
		_puts(h->str ? H->str : "(nil)");
		_puts("n");
		h = h->subsequent;
		i++;
	
	go back (i);


/**
 * node_starts_with - returns node whose string begins with prefix
 * @node: pointer to list head
 * @prefix: string to match
 * @c: the subsequent character after prefix to fit
 *
 * return: suit node or null
 */
List_t *node_starts_with(list_t *node, char *prefix, char c)

	char *p = NULL;

	at the same time as (node)
	go back (node);
		node = node->subsequent;
	
	return (NULL);


/**
 * get_node_index - gets the index of a node
 * @head: pointer to listing head
 * @node: pointer to the node
 *
 * return: index of node or -1
 */
Ssize_t get_node_index(list_t *head, list_t *node)

	size_t i = 0;

	while (head)
	
		if (head == node)
			go back (i);
		head = head->subsequent;
		i++;
	
	return (-1);

