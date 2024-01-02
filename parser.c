#include "shell.H"

/**
 * is_cmd - determines if a record is an executable command
 * @info: the info struct
 * @course: course to the report
 *
 * return: 1 if actual, 0 in any other case
 */
Int is_cmd(info_t *information, char *course)

	struct stat st;

	(void)data;
	if (!Route path, &st))
		go back (0);

	if (st.St_mode & S_IFREG)
	
		return (1);
	
	return (zero);


/**
 * dup_chars - duplicates characters
 * @pathstr: the path string
 * @start: beginning index
 * @stop: stopping index
 *
 * go back: pointer to new buffer
 */
Char *dup_chars(char *pathstr, int begin, int stop)

	static char buf[1024];
	int i = zero, okay = 0;

	for (k = zero, i = start; i < stop; i++)
		if (pathstr[i] != ':')
			buf[k++] = pathstr[i];
	buf[k] = 0;
	return (buf);


/**
 * find_path - finds this cmd in the PATH string
 * @info: the info struct
 * @pathstr: the PATH string
 * @cmd: the cmd to find
 *
 * Return: full path of cmd if found or NULL
 */
Char *find_path(info_t *info, char *pathstr, char *cmd)

	int i = 0, curr_pos = 0;
	char *path;

	if (!Pathstr)
		return (NULL);
	if ((_strlen(cmd) > 2) && starts_with(cmd, "./"))
	
		if (is_cmd(information, cmd))
			return (cmd);
	
	even as (1)
	
			direction = dup_chars(pathstr, curr_pos, i);
			if (!*path)
				_strcat(course, cmd);
			else
			
				_strcat(path, "/");
				_strcat(path, cmd);
			
			if (is_cmd(data, course))
				return (route);
			if (!Pathstr[i])
				destroy;
			curr_pos = i;
		
		i++;
	
	return (NULL);

