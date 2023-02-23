#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to chec
 * Return: integer str len
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - performs lexicogarphic comparison of two strangs.
 * @s1: first str
 * @s2: second str
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - checks if needle starts with haystack
 * @haystack: str to search
 * @needle: substring searched
 * Return: address of next char of haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - concatenates two strings
 * @dest: destination buff
 * @src: source buff
 * Return: points ptr to dest buff
 */
char *_strcat(char *dest, char *src)
{
	char *ret;

	ret = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
