#include <stdio.h>
/**
 * main -print alphabet lower case
 * except e and q
 * return - always 0
 */
int main(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q');
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
