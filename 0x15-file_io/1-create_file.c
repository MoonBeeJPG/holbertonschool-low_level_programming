#include "main.h"
/**
* _strlen - strlen
* @string: string
* Return: 0
*/
unsigned int _strlen(const char *string)
{
	unsigned int i = 0;

	while (string[i] != '\0')
		i++;

	return (i);
}
/**
* create_file - Create a function that creates a file
* @filename: The name of the file to create
* @text_content: A NULL terminated string to write to the file
* Return: 1 on success, -1 on failure
*
* Auth: MoonBeeJPG
*/
int create_file(const char *filename, char *text_content)
{
	int op, wr;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	if (op == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(op);
		return (1);
	}
	wr = write(op, text_content, _strlen(text_content));

	if (wr == -1)
	{
		close(op);
		return (-1);
	}
	close(op);
	return (1);
}
