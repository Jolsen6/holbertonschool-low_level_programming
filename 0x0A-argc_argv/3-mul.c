#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiply two number pulled from the argv numbers
  * @argc: argument count
  * @argv: argument vector
  * Return: ITS STILL 0
  */
int main(int argc, char *argv[])
{
	int j1 = 0, j2 = 0;

	if (argc == 3)
	{
		j1 = atoi(argv[1]);
		j2 = atoi(argv[2]);
		printf("%d\n", j1 * j2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
