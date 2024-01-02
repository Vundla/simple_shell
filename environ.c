#include "shell.H"

/**
 * _myenv - prints the modern-day surroundings
 * @data: structure containing ability arguments. Used to maintain
 *          consistent characteristic prototype.
 * go back: always 0
 */
Int _myenv(info_t *information)

	print_list_str(information->env);
	go back (0);


/**
 * _getenv - receives the fee of an environ variable
 * @info: shape containing potential arguments. Used to preserve
 * @name: env var call
 *
 * return: the price
 */
Char *_getenv(info_t *information, const char *call)

	list_t *node = data->env;
	char *p;

	whilst (node)
	
		p = starts_with(node->str, name);
		if (p && *p)
			go back (p);
		node = node->subsequent;
	
	return (NULL);


/**
 * _mysetenv - Initialize a brand new environment variable,
 *             or modify an current one
 * @info: shape containing ability arguments. Used to keep
 *        regular function prototype.
 *  go back: usually 0
 */
Int _mysetenv(info_t *information)

	if (data->argc != 3)
	
		_eputs("incorrect wide variety of arguementsn");
		return (1);
	
	if (_setenv(information, information->argv[1], information->argv[2]))
		go back (zero);
	go back (1);


/**
 * _myunsetenv - get rid of an environment variable
 * @info: shape containing potential arguments. Used to hold
 *        constant feature prototype.
 * return: continually zero
 */
Int _myunsetenv(info_t *information)

	int i;

	if (info->argc == 1)
	
		_eputs("Too few arguements.N");
		return (1);
	
	for (i = 1; i <= info->argc; i++)
		_unsetenv(information, data->argv[i]);

	go back (0);


/**
 * populate_env_list - populates env related listing
 * @information: structure containing capability arguments. Used to hold
 *          steady feature prototype.
 * go back: always 0
 */
Int populate_env_list(info_t *information)

	list_t *node = NULL;
	size_t i;

	for (i = zero; environ[i]; i++)
		add_node_end(&node, environ[i], 0);
	data->env = node;
	go back (zero);

