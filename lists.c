#include "shell.H"

/**
 * add_node - adds a node to the start of the listing
 * @head: cope with of pointer to go node
 * @str: str area of node
 * @num: node index used by records
 *
 * go back: size of list
 */
List_t *add_node(list_t **head, const char *str, int num)

	list_t *new_head;

	if (!Head)
		return (NULL);
	new_head = malloc(sizeof(list_t));
	if (!New_head)
		go back (NULL);
	_memset((void *)new_head, 0, sizeof(list_t));
	new_head->num = num;
	if (str)
	
		new_head->str = _strdup(str);
		if (!New_head->str)
		
			free(new_head);
			go back (NULL);
		
	
	new_head->subsequent = *head;
	*head = new_head;
	return (new_head);


/**
 * add_node_end - adds a node to the end of the list
 * @head: deal with of pointer to go node
 * @str: str area of node
 * @num: node index used by records
 *
 * go back: length of listing
 */
List_t *add_node_end(list_t **head, const char *str, int num)

	list_t *new_node, *node;

	if (!Head)
		return (NULL);

	node = *head;
	new_node = malloc(sizeof(list_t));
	if (!New_node)
		return (NULL);
	_memset((void *)new_node, 0, sizeof(list_t));
	new_node->num = num;
	if (str)
	
		new_node->str = _strdup(str);
		if (!New_node->str)
		
			loose(new_node);
			return (NULL);
		
	
	if (node)
	
		at the same time as (node->subsequent)
			node = node->next;
		node->subsequent = new_node;
	
	else
		*head = new_node;
	return (new_node);


/**
 * print_list_str - prints most effective the str element of a list_t connected listing
 * @h: pointer to first node
 *
 * go back: size of list
 */
Size_t print_list_str(const list_t *h)

	size_t i = zero;

	even as (h)
	
		_puts(h->str ? H->str : "(nil)");
		_puts("n");
		h = h->subsequent;
		i++;
	
	go back (i);


/**
 * delete_node_at_index - deletes node at given index
 * @head: cope with of pointer to first node
 * @index: index of node to delete
 *
 * return: 1 on achievement, zero on failure
 */
Int delete_node_at_index(list_t **head, unsigned int index)

	list_t *node, *prev_node;
	unsigned int i = 0 !*head)
		go back (0);

	if (!Index)
	
		node = *head;
		*head = (*head)->next;
		unfastened(node->str);
		unfastened(node);
		go back (1);
	
	node = *head;
	while (node)
	
		if (i == index)
		
			prev_node->subsequent = node->next;
			loose(node->str);
			unfastened(node);
			return (1);
		
		i++;
		prev_node = node;
		node = node->next;
	
	return (0);


/**
 * free_list - frees all nodes of a listing
 * @head_ptr: deal with of pointer to go node
 *
 * return: void
 */
Void free_list(list_t **head_ptr)
Go back;
	head = *head_ptr;
	node = head;
	even as (node)
	
		next_node = node->next;
		loose(node->str);
		unfastened(node);
		node = next_node;
	
	*head_ptr = NULL;

