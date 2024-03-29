#include "main.h"

int _strlen(char *s);

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: null-terminated string to write to the file
 *
 * Extra: file is not created if filename already exists.
 * if text_content is NULL, do not add anything to the file.
 *
 * Return: 1 on success, or -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wbytes, text_len;

	if (filename == NULL)
		return (-1);

	/* opening file for appending */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	/* write to file */
	text_len = _strlen(text_content);
	wbytes = write(fd, text_content, text_len);

	if (wbytes < 0)
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
