#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destine string
 * @src: string to appends
 * @n: char num to copy a dest from src
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n);
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];

	dest[i] = '\0';
	return (dest);
}