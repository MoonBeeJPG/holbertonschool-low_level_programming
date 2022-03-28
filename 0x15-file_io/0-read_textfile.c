#include "main.h"
/**
* read_textfile - a function that reads a text file and prints it to the POSIX standard output
* @filename: Name of the file
* @letters: The number of letters it should read and print
* Return: The actual number of letters it could read and print
*
* Auth: MoonBeeJPG
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wr, rd, op;
	FILE *buff;
	
	if (!filename)
		 return (0);

	op = open(filename, O_RDONLY);
	
	if (op == -1)
		return (0);

	buff = malloc(sizeof(char) * letters + 1);
	
	if (!buff)
		return (0);

	rd = read(op, buff, letters);

	if (rd == -1)
		return (0);
	
	wr = write(STDOUT_FILENO, buff, rd);

	if (wr == -1)
		return (0);
	if (wr != rd)
		return (0);

	free(buff);
	close(op);
	return (wr);
		
}
