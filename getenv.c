#include "shell.H"

/**
 * get_environ - returns the string array reproduction of our environ
 * @data: shape containing ability arguments. Used to hold
 *          constant feature prototype.
 * return: constantly 0
 */
Char **get_environ(info_t *info)

	if (!Information->environ data->env_changed)
	
		data->environ = list_to_strings(info->env);
		data->env_changed = 0;
	

	return (info->environ);


/**
 * _unsetenv - dispose of an surroundings variable
 * @information: shape containing ability arguments. Used to keep
 *        steady characteristic prototype.
 *  return: 1 on delete, zero in any other case
 * @var: the string env var property
 */
Int _unsetenv(info_t *data, char *var)

	list_t *node = data->env;
	size_t i = 0 !Var)
		return (0);

	at the same time as (node)
	
		p = starts_with(node->str, var);
		if (p && *p == '=')
		
			data->env_changed = delete_node_at_index(&(information->env), i);
			i = zero;
			node = info->env;
			continue;
		
		node = node->next;
		i++;
	
	go back (info->env_changed);


/**
 * _setenv - Initialize a brand new surroundings variable,
 *             or regulate an current one
 * @info: shape containing ability arguments. Used to maintain
 *        regular feature prototype.
 * @var: the string env var belongings
 * @fee: the string env var fee
 *  go back: usually 0
 */
Int _setenv(info_t *info, char *var, char *price)

	char *buf = NULL;
	list_t *node;
	char *p;

	if (!Var price)
		go back (0);

	buf = malloc(_strlen(var) + _strlen(value) + 2);
	if (!Buf)
		go back (1);
	_strcpy(buf, var);
	_strcat(buf, "=");
	_strcat(buf, fee);
	node = information->env;
	while (node)
	
		p = starts_with(node->str, var);
		if (p && *p == '=')
		
			free(node->str);
			node->str = buf;
			information->env_changed = 1;
			go back (0);
		
		node = node->next;
	
	add_node_end(&(data->env), buf, 0);
	loose(buf);
	info->env_changed = 1;
	return (0);

