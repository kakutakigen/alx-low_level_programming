#include "main.h"

/**
 * append_text_to_file - appends text to end of a file
 * @filename: pointer to name of file
 * @text_content: pointer to string to append
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fild = 0, chk = 0, i = 0;

	if (!filename)
		return (-1);

	fild = open(filename, O_WRONLY | O_APPEND);
	if (fild < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		chk = write(fild, text_content, i);
		if (chk < 0)
			return (-1);
	}
	close(fild);
	return (1);
}
