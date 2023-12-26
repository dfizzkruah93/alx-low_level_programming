#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords
 *
 * Return: 0
 */

#define PASSWORD_LENGTH 6

char generateRandomChar()
{
	return 'A' + (rand() % 26);
}

void generateRandomPassword(char *password)
{
	int i;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = generateRandomChar();
	}
	password[PASSWORD_LENGTH] = '\0';

}

int main()
{
	srand(time(NULL));

	char password[PASSWORD_LENGTH + 1];
	generateRandomPassword(password);
	printf("Generated password:%s\n", password);

	return (0);
}
