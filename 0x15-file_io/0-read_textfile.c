#include "main.h"
/**
 * read_textfile - Entry Point
 * @filename: file name
 * @letters: size
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, lectura;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd = -1)
		return (0);

	lectura = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, lectura);

	free(buff);
	close(fd);

	return (lectura);
}
