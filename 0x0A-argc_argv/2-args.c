#include <stdio.h>
/**
 * main -  writes its name
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int r;

	for (r = 0; r < argc; r++)
	printf("%s\n", argv[r]);

	return (0);
}
