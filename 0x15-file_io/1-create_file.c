#include "main.h"
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
	int op, wr, i = 0;

	if (!filename)
		return (-1);

	op = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (op == -1)
		return (-1);
	
	while (text_content[i])
		i++;

	if (text_content[i] == '\0')
	{
		close(op);
		return (-1);
	}
	else
		wr = write(op, text_content, i);

	if (wr == -1)
		return (-1);
	
	close(op);
	return (1); 
}
