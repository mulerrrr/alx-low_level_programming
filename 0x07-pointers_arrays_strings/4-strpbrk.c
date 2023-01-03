#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: the set of bytes to be searched for
 *
 * Return: if a set is matched - a pointer to the matched byte
 *         if no set is matched - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
