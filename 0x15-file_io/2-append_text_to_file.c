#include "main.h"
/**
* append_text_to_file - A function that appends text at the end of a file.
* @filename: The name of the file
* @text_content: The NULL terminated string to add at the end of the file
* Return: 1 on success and -1 on failure
*
* Auth: MoonBeeJPG
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int op, i = 0;

    if (filename == NULL)
        return (-1);

    op = open(filename, O_CREAT | O_APPEND | O_RDWR, 0600);

    if (op == -1)
        return (-1);

    while (text_content[i])
        i++;

    if (text_content == NULL)
    {
        return (1);
    }
    write(op, text_content, i);

    close(op);
    return (1);
}
