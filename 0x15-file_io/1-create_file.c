#include "main.h"

int _strlen(char *s);

/**
 * create_file - creates a file.
 * @filename: name of the file
 * @text_content: null-terminated string to write to the file
 *
 * Return: 1 on success, or -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wbytes, text_len;

	if (filename == NULL)
		return (-1);

	/* conditions for creation of file */
	fd = open(filename, O_CREAT | O_EXCL | O_TRUNC | O_WRONLY, 0600);
	if (fd < 0)
		return (-1);

	/* case for empty file */
	if (text_content == NULL)
		return (-1);

	/* write to file */
	text_len = _strlen(text_content);
	wbytes = write(fd, text_content, text_len);

	if (wbytes < text_len)
		return (-1);

	close(fd);
	return (1);
}

/**
 * _strlen - returns the length of a string passed to it.
 * @s: the string which will have its length returned.
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;
	int length;

	length = 0;

	/* loop until end of string s */
	for (i = 0; s[i] != '\0'; i++)
		length++;

	return (length);
}
