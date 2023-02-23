#include "shell.h"

/**
 **_memset - fills memory with a constant byte
 *@s: pointer to memory area
 *@b: the byte to fill *s with
 *@n: bytes to e filled
 *Return: (s) a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - frees a string of strings
 * @pp: str that is of strings
 */
void ffree(char **pp)
{
	char **a;

	a = pp;
	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - reallocates a block of memory
 * @ptr: pointer to previous block that is mallocced
 * @old_size:  previous block its byte size
 * @new_size: new block byte size
 * Return: ptr to da old block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
