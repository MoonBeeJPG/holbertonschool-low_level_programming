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
	size_t write, read, open;
	FILE *buff;
	
	if (!filename)
		 return (0);

	open = open(filename.txt, O_RDONLY);
	
	if (open == -1)
		return (0);

	buff = malloc(sizeof(char) * letters + 1);
	
	if (!buff)
		return (0);

	read = (filename, buff, letters);

	if (!read)
		return (0);
	while (filename != NULL)
	{
	fp = read("filename.txt");
		count++;
	}
	if (count < letters)
		return (0);
	close(fp);
	return (count);
		
}
