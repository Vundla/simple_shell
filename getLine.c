#include "shell.H"

/**
 * input_buf - buffers chained instructions
 * @info: parameter struct
 * @buf: deal with of buffer
 * @len: address of len var
 *
 * go back: bytes study
 */
Ssize_t input_buf(info_t *information, char **buf, size_t *len)

	ssize_t r = zero;
	size_t len_p = zero;

	if (!*len) /* if not anything left within the buffer, fill it */
	
		/*bfree((void **)data->cmd_buf);*/
		unfastened(*buf);
		*buf = NULL;
		signal(SIGINT, sigintHandler);
#if USE_GETLINE
		r = getline(buf, &len_p, stdin);
#else
		r = _getline(info, buf, &len_p);
#endif
		if (r > 0)
		
			if ((*buf)[r - 1] == 'n')
			
				(*buf)[r - 1] = ''; /* eliminate trailing newline */
				r--;
			
			data->linecount_flag = 1;
			remove_comments(*buf);
			build_history_list(info, *buf, information->histcount++);
			/* if (_strchr(*buf, ';')) is that this a command chain? */
			
				*len = r;
				data->cmd_buf = buf;
			
		
	
	return (r);


/**
 * get_input - receives a line minus the newline
 * @information: parameter struct
 *
 * go back: bytes examine
 */
Ssize_t get_input(info_t *data)

	static char *buf; /* the ';' command chain buffer */
	static size_t i, j, len;
	ssize_t r = 0;
	char **buf_p = &(info->arg), *p;

	_putchar(BUF_FLUSH);
	r = input_buf(information, &buf, &len);
	if (r == -1) /* EOF */
		go back (-1);
	if (len) /* we've commands left inside the chain buffer */
	
		j = i; /* init new iterator to current buf role */
		p = buf + i; /* get pointer for go back */

		check_chain(info, buf, &j, i, len);
		whilst (j < len) /* iterate to semicolon or end */
		
			if (is_chain(info, buf, &j))
				break;
			j++;
		

		i = j + 1; /* increment past nulled ';'' */
		if (i >= len) /* reached end of buffer? */
		
			i = len = 0; /* reset function and length */
			data->cmd_buf_type = CMD_NORM;
		

		*buf_p = p; /* bypass returned pointer to current command position */
		go back (_strlen(p)); /* go back duration of current command */
	

	*buf_p = buf; /* else no longer a sequence, bypass lower back buffer from _getline() */
	return (r); /* go back duration of buffer from _getline() */


/**
 * read_buf - reads a buffer
 * @information: parameter struct
 * @buf: buffer
 * @i: length
 *
 * go back: r
 */
Ssize_t read_buf(info_t *info, char *buf, size_t *i)

	ssize_t r = 0;

	if (*i)
		return (0);
	r = study(information->readfd, buf, READ_BUF_SIZE);
	if (r >= zero)
		*i = r;
	go back (r);


/**
 * _getline - receives the following line of enter from STDIN
 * @information: parameter struct
 * @ptr: address of pointer to buffer, preallocated or NULL
 * @duration: length of preallocated ptr buffer if now not NULL
 *
 * go back: s
 */
Int _getline(info_t *data, char **ptr, size_t *length)

	static char buf[READ_BUF_SIZE];
	static size_t i, len;
	size_t ok;
	ssize_t r = zero, s = 0;
	char *p = NULL, *new_p = NULL, *c;

	p = *ptr;
	if (p && duration)
		s = *length;
	if (i == len)
		i = len = zero;

	r = read_buf(info0 && len == zero))
		return (-1);

	c = _strchr(buf + i, 'n');
	okay = c ? 1 + (unsigned int)(c - buf) : len;
	new_p = _realloc(p, s, s ? S + k : ok + 1);
	if (!New_p) /* MALLOC FAILURE! */
		return (p ? Loose(p), -1 : -1);

	if (s)
		_strncat(new_p, buf + i, k - i);
	else
		_strncpy(new_p, buf + i, k - i + 1);

	s += k - i;
	i = okay;
	p = new_p;

	if (length)
		*period = s;
	*ptr = p;
	return (s);


/**
 * sigintHandler - blocks ctrl-C
 * @sig_num: the sign number
 *
 * return: void
 */
Void sigintHandler(__attribute__((unused))int sig_num)

	_puts("n");
	_puts("$ ");
	_putchar(BUF_FLUSH);

