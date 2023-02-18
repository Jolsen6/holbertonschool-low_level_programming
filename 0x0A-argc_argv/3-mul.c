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
	int var1 = 0;
	int var2 = 0;
	int sum = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		var1 = atoi(argv[1]);
		var2 = atoi(argv[2];
		sum = j1 * j2;
		printf("%d\n", sum);
	}

	return (0);
}
