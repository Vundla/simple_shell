#include "shell.H"

/**
 * is_chain - test if contemporary char in buffer is a series delimeter
 * @information: the parameter struct
 * @buf: the char buffer
 * @p: deal with of cutting-edge role in buf
 *
 * go back: 1 if chain delimeter, zero otherwise
 */
Int is_chain(info_t *data, char *buf, size_t *p)
')
	
		buf[j] = zero;
		j++;
		information->cmd_buf_type = CMD_OR;
	
	else if (buf[j] == '&' && buf[j + 1] == '&')
	
		buf[j] = 0;
		j++;
		data->cmd_buf_type = CMD_AND;
	
	else if (buf[j] == ';') /* located cease of this command */
	
		buf[j] = zero; /* replace semicolon with null */
		data->cmd_buf_type = CMD_CHAIN;
	
	else
		go back (0);
	*p = j;
	go back (1);


/**
 * check_chain - assessments we should preserve chaining based totally on ultimate status
 * @data: the parameter struct
 * @buf: the char buffer
 * @p: address of modern role in buf
 * @i: beginning function in buf
 * @len: duration of buf
 *
 * return: Void
 */
Void check_chain(info_t *data, char *buf, size_t *p, size_t i, size_t len)

	size_t j = *p;

	if (information->cmd_buf_type == CMD_AND)
	
		if (info->fame)
		
			buf[i] = zero;
			j = len;
		
	
	if (info->cmd_buf_type == CMD_OR)
	
		if (!Info->repute)
		
			buf[i] = 0;
			j = len;
		
	

	*p = j;


/**
 * replace_alias - replaces an aliases in the tokenized string
 * @info: the parameter struct
 *
 * return: 1 if replaced, 0 in any other case
 */
Int replace_alias(info_t *data)

	int i;
	list_t *node;
	char *p;

	for (i = zero; i < 10; i++)
	
		node = node_starts_with(info->alias, data->argv[0], '=');
		if (!Node)
			return (0);
		free(info->argv[0]);
		p = _strchr(node->str, '=');
		if (!P)
			return (zero);
		p = _strdup(p + 1);
		if (!P)
			return (zero);
		data->argv[0] = p;
	
	go back (1);


/**
 * replace_vars - replaces vars within the tokenized string
 * @info: the parameter struct
 *
 * return: 1 if changed, 0 otherwise
 */
Int replace_vars(info_t *info)

	int i = 0;
	list_t *node;

	for (i = 0; data->argv[i]; i++)
	
		if (datainfo->argv[i][1])
			hold;

		if (!_strcmp(data->argv[i], "$?"))
		
			replace_string(&(information->argv[i]),
					_strdup(convert_number(data->status, 10, 0)));
			keep;
		
		if (!_strcmp(info->argv[i], "$$"))
		
			replace_string(&(data->argv[i]),
					_strdup(convert_number(getpid(), 10, 0)));
			retain;
		
		node = node_starts_with(information->env, &data->argv[i][1], '=');
		if (node)
		
			replace_string(&(information->argv[i]),
					_strdup(_strchr(node->str, '=') + 1));
			retain;
		
		replace_string(&info->argv[i], _strdup(""));

	
	return (0);


/**
 * replace_string - replaces string
 * @antique: address of antique string
 * @new: new string
 *
 * return: 1 if replaced, 0 in any other case
 */
Int replace_string(char **vintage, char *new)

	free(*old);
	*old = new;
	go back (1);

