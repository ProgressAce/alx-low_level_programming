#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: name of the file
 * @letters: the number of characters to read from file
 *
 * Return: 1 on success, or -1 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rbytes, wbytes;
	char *text;

	text = malloc(letters * sizeof(char));
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	rbytes = read(fd, text, letters);
	text[rbytes] = '\0';

	wbytes = write(STDOUT_FILENO, text, rbytes);

	if (wbytes != rbytes)
		return (0);

	free(text);
	close(fd);
	return (wbytes);
}
