#include "shell.h"

/**
 * _printf -    prints stdin to stdout of terminal
 * @str:        String buffer to be written to
 * @fd:         File Descriptor
 * Return:      Outputs stdin on stdout of file descriptor 
 */
ssize_t _printf(char *str, int fd)
{
    ssize_t len = 0, num;

	fd = STDOUT_FILENO;
	num = strlen(str);
	len = write(fd, str, num);
	if (len != num)
	{
		perror("Can't Print to Stdout");
		return(-1);
	}
	return (len);
}