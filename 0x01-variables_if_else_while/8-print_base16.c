#include<stdio.h>
/**
 * main - prints base 16 numbers
 * Return: Always 0
 */
int main(void)
{
	int n;
	char la;

	for (n = 0; n < 10; n++)
		putchar(n % 10 + '0');
	for (la = 'a'; la <= 'f'; la++)
		putchar(la);
	putchar('\n');
	return (0);
}
