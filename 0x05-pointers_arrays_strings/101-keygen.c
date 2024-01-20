#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

/**
 * checksum - check the sum of the string
 *
 * @s: strint to checked
 *Return: sum of the string
 */

unsigned long int checksum(char *s)
{
	unsigned long int sum = 0;

	for (; *s != 0; s++)
	{
		sum += *s;
	}
	return (sum);
}

/**
 * main - print password for crackme
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int sum;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFHHIJKLMNOPQRSTUVWXYZ";
	char s[33];
	int i, flag = 0;

	while (flag == 0)
	{
		for (i = 0; i < 33; i++)
		{
			s[i] = alpha[rand() % sizeof(alpha) - 1];
		}
		s[i] = '\0';
		sum = checksum(s);

		if (sum == 2772)
		{
			flag = 1;
			printf("%s\n", s);
		}
	}
	return (0);
}
