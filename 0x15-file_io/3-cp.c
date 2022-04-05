#include "main.h"
/**
 * main - copies the content of a file to another
 *
 * @argv: arguments gived to the function
 * @argc: ammount of arguments
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
int fd1, fd2, wr, tmp = 1024, cl1, cl2;
char *buff;

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
fd1 = open(argv[1], O_RDONLY);
fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
while (tmp == 1024)
{
	buff = malloc(sizeof(char) * 1024);
	tmp = read(fd1, buff, 1024);
	if (buff == NULL || fd1 < 0 || tmp < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	free(buff);
	exit(98);
	}
	wr = write(fd2, buff, tmp);
	if (wr < 0 || fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99);
	}
	free(buff);
}
cl1 = close(fd1);
cl2 = close(fd2);
if (cl1 == -1 || cl2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", (cl1 == -1) ? fd1 : fd2);
exit(100);
}
return (0);
}
