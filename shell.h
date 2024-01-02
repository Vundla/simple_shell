#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.H>
#include <stdlib.H>
#include <unistd.H>
#include <string.H>
#include <sys/types.H>
#include <sys/wait.H>
#include <sys/stat.H>
#include <limits.H>
#include <fcntl.H>
#include <errno.H>

/* for read/write buffers */
#define READ_BUF_SIZE 1024
#define WRITE_BUF_SIZE 1024
#outline BUF_FLUSH -1

/* for command chaining */
#define CMD_NORM	0
#outline CMD_OR		1
#define CMD_AND		2
#define CMD_CHAIN	three

/* for convert_number() */
#define CONVERT_LOWERCASE	1
#define CONVERT_UNSIGNED	2

/* 1 if the use of gadget getline() */
#define USE_GETLINE 0
#outline USE_STRTOK 0

#define HIST_FILE	".Simple_shell_history"
#outline HIST_MAX	4096

Extern char **environ;


/**
 * struct liststr - singly related listing
 * @num: the quantity field
 * @str: a string
 * @subsequent: factors to the subsequent node
 */
Typedef struct liststr

	int num;
	char *str;
	struct liststr *subsequent;
 list_t;

/**
 * struct passinfo - incorporates pseudo-arguements to skip right into a function,
 * permitting uniform prototype for function pointer struct
 * @arg: a string generated from getline containing arguements
 * @argv:an array of strings generated from arg
 * @course: a string direction for the modern command
 * @argc: the argument be counted
 * @line_count: the error be counted
 * @err_num: the error code for go out()s
 * @linecount_flag: if on matter this line of enter
 * @fname: this system filename
 * @env: related listing local copy of environ
 * @environ: custom modified copy of environ from LL env
 * @history: the records node
 * @alias: the alias node
 * @env_changed: on if environ became modified
 * @reputation: the go back repute of the ultimate exec'd command
 * @cmd_buf: addressstudy line input
 * @histcount: the records line quantity matter
 */
Typedef struct passinfo

	char *arg;
	char **argv;
	char *route;
	int argc;
	unsigned int line_count;
	int err_num;
	int linecount_flag;
	char *fname;
	list_t *env;
	list_t *records;
	list_t *alias;
	char **environ;
	int env_changed;
	int fame;

	char **cmd_buf; /* pointer to cmd ; chain buffer, for reminiscence info_t;

#outline INFO_INIT 
NULL, NULL, NULL, zero, zero, zero, zero, NULL, NULL, NULL, NULL, NULL, 0, zero, NULL, 
		0, zero, zero

/**
 * struct builtin - carries a builtin string and related characteristic
 * @type: the builtin command flag
 * @func: the characteristic
 */
Typedef struct builtin

	char *type;
	int (*func)(info_t *);
 builtin_table;


/* toem_shloop.C */
Int hsh(info_t *, char **);
Int find_builtin(info_t *);
Void find_cmd(info_t *);
Void fork_cmd(info_t *);

/* toem_parser.C */
Int is_cmd(info_t *, char *);
Char *dup_chars(char *, int, int);
Char *find_path(info_t *, char *, char *);

/* loophsh.C */
Int loophsh(char **);

/* toem_errors.C */
Void _eputs(char *);
Int _eputchar(char);
Int _putfd(char c, int fd);
Int _putsfd(char *str, int fd);

/* toem_string.C */
Int _strlen(char *);
Int _strcmp(char *, char *);
Char *starts_with(const char *, const char *);
Char *_strcat(char *, char *);

/* toem_string1.C */
Char *_strcpy(char *, char *);
Char *_strdup(const char *);
Void _puts(char *);
Int _putchar(char);

/* toem_exits.C */
Char *_strncpy(char *, char *, int);
Char *_strncat(char *, char *, int);
Char *_strchr(char *, char);

/* toem_tokenizer.C */
Char **strtow(char *, char *);
Char **strtow2(char *, char);

/* toem_realloc.C */
Char *_memset(char *, char, unsigned int);
Void ffree(char **);
Void *_realloc(void *, unsigned int, unsigned int);

/* toem_memory.C */
Int bfree(void **);

/* toem_atoi.C */
Int interactive(info_t *);
Int is_delim(char, char *);
Int _isalpha(int);
Int _atoi(char *);

/* toem_errors1.C */
Int _erratoi(char *);
Void print_error(info_t *, char *);
Int print_d(int, int);
Char *convert_number(long int, int, int);
Void remove_comments(char *);

/* toem_builtin.C */
Int _myexit(info_t *);
Int _mycd(info_t *);
Int _myhelp(info_t *);

/* toem_builtin1.C */
Int _myhistory(info_t *);
Int _myalias(info_t *);

/*toem_getline.C */
Ssize_t get_input(info_t *);
Int _getline(info_t *, char **, size_t *);
Void sigintHandler(int);

/* toem_getinfo.C */
Void clear_info(info_t *);
Void set_info(info_t *, char **);
Void free_info(info_t *, int);

/* toem_environ.C */
Char *_getenv(info_t *, const char *);
Int _myenv(info_t *);
Int _mysetenv(info_t *);
Int _myunsetenv(info_t *);
Int populate_env_list(info_t *);

/* toem_getenv.C */
Char **get_environ(info_t *);
Int _unsetenv(info_t *, char *);
Int _setenv(info_t *, char *, char *);

/* toem_history.C */
Char *get_history_file(info_t *information);
Int write_history(info_t *info);
Int read_history(info_t *info);
Int build_history_list(info_t *data, char *buf, int linecount);
Int renumber_history(info_t *information);

/* toem_lists.C */
List_t *add_node(list_t **, const char *, int);
List_t *add_node_end(list_t **, const char *, int);
Size_t print_list_str(const list_t *);
Int delete_node_at_index(list_t **, unsigned int);
Void free_list(list_t **);

/* toem_lists1.C */
Size_t list_len(const list_t *);
Char **list_to_strings(list_t *);
Size_t print_list(const list_t *);
List_t *node_starts_with(list_t *, char *, char);
Ssize_t get_node_index(list_t *, list_t *);

/* toem_vars.C */
Int is_chain(info_t *, char *, size_t *);
Void check_chain(info_t *, char *, size_t *, size_t, size_t);
Int replace_alias(info_t *);
Int replace_vars(info_t *);
Int replace_string(char **, char *);

#endif
