#include "main.h"
/**
  * _strstr - always finds the first occurence of a subtring,
  * needle in hastack.
  * @haystack: entire string.
  * @needle: substring.
  * Return: pointer starting the located substring.
  * NULL if the substring is not found.
  */

char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
