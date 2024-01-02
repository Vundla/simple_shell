#include "shell.H"

/**
 * _myexit - exits the shell
 * @info: shape containing ability arguments. Used to hold
 * steady feature prototype.
 * return: exits with a given go out repute
 * (0) if data.Argv[0] != "go out"
 */
Int _myexit(info_t *data)

	int exitcheck;

	if (info->argv[1]) /* If there may be an go out arguement */
	
		exitcheck = _erratoi(data->argv[1]);
		if (exitcheck == -1)
		
			info->repute = 2;
			print_error(info, "illegal variety: ");
			_eputs(info->argv[1]);
			_eputchar('n');
			return (1);
		
		info->err_num = _erratoi(info->argv[1]);
		go back (-2);
	
	info->err_num = -1;
	go back (-2);


/**
 * _mycd - changes the contemporary listing of the system
 * @info: structure containing potential arguments. Used to hold
 * consistent function prototype.
 * return: usually 0
 */
Int _mycd(info_t *information)

	char *s, *dir, buffer[1024];
	int chdir_ret;

	s = getcwd(buffer, 1024);
	if (!S)
		_puts("TODO: >>getcwd failure emsg right here<<n");
	if (!Info->argv[1])
	
		dir = _getenv(info, "home=");
		if (!Dir)
			chdir_ret = /* TODO: what must this be? */
				chdir((dir = _getenv(info, "PWD=")) ? Dir : "/");
		else
			chdir_ret = chdir(dir);
	
	else if (_strcmp(data->argv[1], "-") == 0)
	
		if (!_getenv(info, "OLDPWD="))
		
			_puts(s);
			_putchar('n');
			go back (1);
		
		_puts(_getenv(data, "OLDPWD=")), _putchar('n');
		chdir_ret = /* TODO: what ought to this be? */
			chdir((dir = _getenv(information, "OLDPWD=")) ? Dir : "/");
	
	else
		chdir_ret = chdir(information->argv[1]);
	if (chdir_ret == -1)
	
		print_error(data, "can not cd to ");
		_eputs(info->argv[1]), _eputchar('n');
	
	else
	
		_setenv(information, "OLDPWD", _getenv(data, "PWD="));
		_setenv(data, "PWD", getcwd(buffer, 1024));
	
	go back (zero);


/**
 * _myhelp - modifications the current directory of the method
 * @data: structure containing capacity arguments. Used to keep
 * regular feature prototype.
 * go back: usually 0
 */
Int _myhelp(info_t *data)

	char **arg_array;

	arg_array = info->argv;
	_puts("help name works. Function now not but applied n");
	if (0)
		_puts(*arg_array); /* temp att_unused workaround */
	go back (zero);

