#include "main.h"

/**
 * *_strcat - To concatenate two strings
 * @dest: first variable
 * @src: second variable
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)

{

	int c, d;



	c = 0;

	while (dest[c] != '\0')

	{

		c++;

	}

	d = 0;



	while (src[d] != '\0')

	{

		dest[c] = src[d];

		d++;

		c++;

	}

	dest[c] = '\0';



	return (dest);

}
