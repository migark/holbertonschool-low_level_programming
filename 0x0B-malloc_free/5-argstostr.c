#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *argstostr - concatenates all the arguements of your program
 *@ac: arguement count
 *@av: argument values
 * Return: pointer to string
 */

char *argstostr(int ac, char **av)
{
	char *str, *begin;
	int i, j, count;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			count++;
		}
		count++;
	}
	count++;
	str = malloc(count * sizeof(char));
	if (str == NULL)
		return (NULL);
	begin = str;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			*str = av[i][j];
			j++;
			str++;
		}
		*str = '\n';
		str++;
	}
	return (begin);
}
