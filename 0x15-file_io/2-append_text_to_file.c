#include "main.h"
/**
 * append_text_to_file - Function will append text at the end of file
 * @filename: The name of the pointer
 * @text_content: The string that will be added to the file
 * Return: --1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int y, q, length = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	y = open(filename, O_WRONLY | O_APPEND);
	q = write(y, text_content, length);

	if (y == -1 || q == -1)
		return (-1);

	close(y);
	return (1);
}
