#include "shell.h"

/**
 **_strncpy - copies a string
 *@dest: destination string being copied
 *@src: str source
 *@n: no. of chars copied
 *Return: the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j, m;
	char *s = dest;

	j = 0;
	while (src[j] != '\0' && j < n - 1)
	{
		dest[j] = src[j];
		j++;
	}
	if (j < n)
	{
		m = j;
		while (m < n)
		{
			dest[m] = '\0';
			m++;
		}
	}
	return (s);
}

/**
 **_strncat - concatenates two strings
 *@dest: first str
 *@src: second str
 *@n: bytes no. to be used
 *Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0, m = 0;
	char *s = dest;

	while (dest[j] != '\0')
		j++;
	while (src[m] != '\0' && m < n)
	{
		dest[j] = src[m];
		j++;
		m++;
	}
	if (m < n)
		dest[j] = '\0';
	return (s);
}

/**
 **_strchr - locates a character in a string
 *@s: string being parsed
 *@c: char to find
 *Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
