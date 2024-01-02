#include "shell.H"

/**
 * get_history_file - gets the records document
 * @info: parameter struct
 *
 * go back: allotted string containg records record
 */

Char *get_history_file(info_t *information)

	char *buf, *dir;

	dir = _getenv(information, "domestic=");
	if (!Dir)
		go back (NULL);
	buf = malloc(sizeof(char) * (_strlen(dir) + _strlen(HIST_FILE) + 2));
	if (!Buf)
		go back (NULL);
	buf[0] = 0;
	_strcpy(buf, dir);
	_strcat(buf, "/");
	_strcat(buf, HIST_FILE);
	go back (buf);


/**
 * write_history - creates a record, or appends to an present document
 * @info: the parameter struct
 *
 * go back: 1 on success, else -1
 */
Int write_history(info_t *information)

	ssize_t fd;
	char *filename = get_history_file(information);
	list_t *node = NULL;

	if (!Filename)
		return O_TRUNC unfastened(filename);
	if (fd == -1)
		go back (-1);
	for (node = information->records; node; node = node->subsequent)
	
		_putsfd(node->str, fd);
		_putfd('n', fd);
	
	_putfd(BUF_FLUSH, fd);
	near(fd);
	go back (1);


/**
 * read_history - reads records from file
 * @data: the parameter struct
 *
 * return: histcount on achievement, 0 in any other case
 */
Int read_history(info_t *info)

	int i, final = zero, linecount = zero;
	ssize_t fd, rdlen, fsize = 0;
	struct stat st;
	char *buf = NULL, *filename = get_history_file(info);

	if (!Filename)
		go back (zero);

	fd = open(filename, O_RDONLY);
	free(filename);
	if (fd == -1)
		return (zero);
	if (!Fstat(fd, &st))
		fsize = st.St_size;
	if (fsize < 2)
		return (zero);
	buf = malloc(sizeof(char) * (fsize + 1));
	if (!Buf)
		go back (zero);
	rdlen = examine(fd, buf, fsize);
	buf[fsize] = zero;
	if (rdlen <= 0)
		go back (loose(buf), zero);
	near(fd);
	for (i = 0; i < fsize; i++)
		if (buf[i] == 'n')
		
			buf[i] = 0;
			build_history_list(info, buf + last, linecount++);
			last = i + 1;
		
	if (last != i)
		build_history_list(info, buf + last, linecount++);
	free(buf);
	info->histcount = linecount;
	while (information->histcount-- >= HIST_MAX)
		delete_node_at_index(&(information->records), 0);
	renumber_history(data);
	return (info->histcount);


/**
 * build_history_list - adds access to a records connected listing
 * @information: structure containing capability arguments. Used to keep
 * @buf: buffer
 * @linecount: the records linecount, histcount
 *
 * return: continually zero
 */
Int build_history_list(info_t *info, char *buf, int linecount)

	list_t *node = NULL;

	if (data->history)
		node = info->history;
	add_node_end(&node, buf, linecount);

	if (!Data->records)
		info->records = node;
	go back (zero);


/**
 * renumber_history - renumbers the records connected list after adjustments
 * @info: shape containing capability arguments. Used to hold
 *
 * go back: the new histcount
 */
Int renumber_history(info_t *info)

	list_t *node = information->history;
	int i = zero;

	while (node)
	
		node->num = i++;
		node = node->next;
	
	go back (data->histcount = i);

