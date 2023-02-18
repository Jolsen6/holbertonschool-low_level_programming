#include "main.h"
#include <stdio.h>

/**
 *main - adds two numbers
 *@argc: arguement counter
 *@argv: arguement vector
 *Return: comes back 0
 */

int main(int argc, char *argv[])
{
int i, d, sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (d = 0; argv[i][d]; d++)
		{
			if (argv[i][d] < '0' || argv[i][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}	
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
