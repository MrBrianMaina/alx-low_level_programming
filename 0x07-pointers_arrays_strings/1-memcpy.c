#include "main.h"
/**
  * _memcpy - copies memory location,
  * @dest: desination memory area.
  * @src: source memory area.
  * @n: these are bytes filled.
  * Return: the pointer to dest.
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + 1) = *(src + 1);
	return (dest);
}
