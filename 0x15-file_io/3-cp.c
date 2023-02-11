#include "main.h"

void error_file(int fd_copy, int fd_paste, char **argv);

/**
 * main - program that copies the content of a file to another file.
 * @argc: number of arguments
 * @argc: an array of string arguments
 *
 * Return: the value of the bit at index "index", or -1 if an error occured
 */

int main(int argc, char **argv)
{
	int fd_copy, fd_paste;
	ssize_t nchars = 1024, wbytes;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	while (nchars == 1024)
	{
		fd_copy = open(argv[1], O_RDONLY);
		fd_paste = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
		error_file(fd_copy, fd_paste, argv);

		/* read from copy file and check for errors */
		nchars = read(fd_copy, buff, nchars);
		if (nchars < 0)
			error_file(-1, 0, argv);

		/* write to paste file and check for errors */
		wbytes = write(fd_paste, buff, nchars);
		if (wbytes < 0)
			error_file(0, -1, argv);

		/* check for any close errors on system call */
		if (close(fd_copy) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_copy);
			exit(100);
		}
		if(close(fd_paste) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_paste);
			exit(100);
		}
	}

	return (1);
}

void error_file(int fd_copy, int fd_paste, char **argv)
{
	if (fd_copy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fd_paste == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
