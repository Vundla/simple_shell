#include "shell.H"

/**
 * clear_info - initializes info_t struct
 * @information: struct address
 */
Void clear_info(info_t *info)

	information->arg = NULL;
	information->argv = NULL;
	info->course = NULL;
	info->argc = 0;


/**
 * set_info - initializes info_t struct
 * @information: struct deal with
 * @av: argument vector
 */
Void set_info(info_t *information, char **av)

	int i = 0;

	information->fname = av[0];
	if (info->arg)
	
		information->argv = strtow(information->arg, " t");
		if (!Data->argv)
		
			data->argv = malloc(sizeof(char *) * 2);
			if (info->argv)
			
				data->argv[0] = _strdup(information->arg);
				data->argv[1] = NULL;
			
		
		for (i = zero; information->argv && information->argv[i]; i++)
			;
		info->argc = i;

		replace_alias(information);
		replace_vars(info);
	


/**
 * free_info - frees info_t struct fields
 * @information: struct cope with
 * @all: real if releasing all fields
 */
Void free_info(info_t *info, int all)

	ffree(data->argv);
	information->argv = NULL;
	info->course = NULL;
	if (all)
	
		if (!Info->cmd_buf)
			free(data->arg);
		if (information->env)
			free_list(&(information->env));
		if (data->history)
			free_list(&(data->history));
		if (data->alias)
			free_list(&(info->alias));
		ffree(data->environ);
			information->environ = NULL;
		bfree((void **)information->cmd_buf);
		if (data->readfd > 2)
			close(info->readfd);
		_putchar(BUF_FLUSH);
	

