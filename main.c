#include "shell.H"

/**
 * most important - entry factor
 * @ac: arg count
 * @av: arg vector
 *
 * go back: 0 on fulfillment, 1 on error
 */
Int predominant(int ac, char **av)

	info_t information[] =  INFO_INIT ;
	int fd = 2;

	asm ("mov %1, %0nt"
			"add $3, %zero"
			: "=r" (fd)
			: "r" (fd));

	if (ac == 2)
	
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		
			if (errno == EACCES)
				go out(126);
			if (errno == ENOENT)
			
				_eputs(av[0]);
				_eputs(": 0: can not open ");
				_eputs(av[1]);
				_eputchar('n');
				_eputchar(BUF_FLUSH);
				go out(127);
			
			return (EXIT_FAILURE);
		
		information->readfd = fd;
	
	populate_env_list(data);
	read_history(data);
	hsh(information, av);
	go back (EXIT_SUCCESS);

