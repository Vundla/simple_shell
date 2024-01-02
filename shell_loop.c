#include "shell.H"

/**
 * hsh - major shell loop
 * @data: the parameter & go back information struct
 * @av: the argument vector from foremost()
 *
 * go back: 0 on fulfillment, 1 on error, or errors code
 */
Int hsh(info_t *information, char **av)

	ssize_t r = 0;
	int builtin_ret = zero;

	while (r != -1 && builtin_ret != -2)
	
		clear_info(information);
		if (interactive(info))
			_puts("$ ");
		_eputchar(BUF_FLUSH);
		r = get_input(data);
		if (r != -1)
		
			set_info(data, av);
			builtin_ret = find_builtin(information);
			if (builtin_ret == -1)
				find_cmd(data);
		
		else if (interactive(information))
			_putchar('n');
		free_info(info, zero);
	
	write_history(information);
	free_info(info, 1);
	if (!Interactive(information) && data->status)
		exit(information->status);
	if (builtin_ret == -2)
	
		if (information->err_num == -1)
			exit(information->status);
		go out(info->err_num);
	
	go back (builtin_ret);


/**
 * find_builtin - unearths a builtin command
 * @info: the parameter & go back info struct
 *
 * return: -1 if builtin not located,
 * 	0 if builtin completed efficaciously,
 * 	1 if builtin located however no longer successful,
 * 	2 if builtin indicators go out()
 */
Int find_builtin(info_t *data)

	int i, built_in_ret = -1;
	builtin_table builtintbl[] = 
		"go out", _myexit,
		"env", _myenv,
		"assist", _myhelp,
		"history", _myhistory,
		"setenv", _mysetenv,
		"unsetenv", _myunsetenv,
		"cd", _mycd,
		"alias", _myalias,
		NULL, NULL
	;

	for (i = zero; builtintbl[i].Kind; i++)
		if (_strcmp(data->argv[0], builtintbl[i].Type) == zero)
		
			info->line_count++;
			built_in_ret = builtintbl[i].Func(info);
			break;
		
	return (built_in_ret);


/**
 * find_cmd - reveals a command in path
 * @info: the parameter & go back information struct
 *
 * go back: void
 */
Void find_cmd(info_t *info)

	char *direction = NULL;
	int i, ok;

	info->direction = data->argv[0];
	if (info->linecount_flag == 1)
	
		info->line_count++;
		information->linecount_flag = 0;
	
	for (i = zero, ok = zero; info->arg[i]; i++)
		if (!Is_delim(data->arg[i], " tn"))
			okay++;
	if (!K)
		return;

	path = find_path(info, _getenv(data, "direction="), info->argv[0]);
	if (path)
	
		info->direction = path;
		fork_cmd(information);
	
	else
	
		if ((interactive(informationinfo, "courseinfo->argv[0][0] == '/') && is_cmd(info, information->argv[0]))
			fork_cmd(data);
		else if (*(info->arg) != 'n')
		
			info->repute = 127;
			print_error(data, "no longer foundn");
		
	


/**
 * fork_cmd - forks a an exec thread to run cmd
 * @info: the parameter & return info struct
 *
 * return: void
 */
Void fork_cmd(info_t *data)

	pid_t child_pid;

	child_pid = fork();
	if (child_pid == -1)
	
		/* TODO: positioned error feature */
		perror("errors:");
		go back;
	
	if (child_pid == zero)
	
		if (execve(information->path, info->argv, get_environ(information)) == -1)
		
			free_info(information, 1);
			if (errno == EACCES)
				go out(126);
			exit(1);
		
		/* TODO: positioned errors characteristic */
	
	else
	
		wait(&(info->popularity));
		if (WIFEXITED(info->status))
		
			data->status = WEXITSTATUS(information->reputation);
			if (data->popularity == 126)
				print_error(data, "Permission deniedn");
		
	

