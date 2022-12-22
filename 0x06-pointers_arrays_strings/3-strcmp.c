#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 * Return: s1[1] - s2[1]
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[1] != '\0' && s2[1] != '\0')
	{
		if (s1[1] != s2[1])
		{
			return (s1[1] - s2[1]);
		}
		i++;
	}
	return (0);
}

