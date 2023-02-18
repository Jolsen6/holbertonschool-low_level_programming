#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds two numbers
 *@argc: arguement counter
 *@argv: arguement vector
 *Return: comes back 0
 */

int main (int argc, char *argv[])
{

int i;
int n1 = 0;
int n2 = 0;
int sum = 0;

	if (argc < 1 || /*contains no number*/)
	{
	printf("0\n");
	}
	else
	{
		for (i = 0; i < argc; i++;)
		{
			if (argv[i] < 48 || argc[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
		}
	}
printf("%d\n", sum);
return (0);
}	
