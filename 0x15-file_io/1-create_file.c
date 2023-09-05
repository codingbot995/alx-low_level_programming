#include "main.h"
/**
 * create_file - creates a file.
 * @filename:name of filename
 * @text_content:content file
 * Return:1 if successful else -1
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
	{
		i++;
	}
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	write(file, text_content, i);
	return (1);
}
