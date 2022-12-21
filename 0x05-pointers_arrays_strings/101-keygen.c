#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this function generates random valid passwords
 * Return: 0
 */
int main(void)
{
	int password, x;

	srand(time(NULL));
	x = 0;
	while (x <= 2645)
	{
		password = (rand() % 128);
		x += password;
		printf("%c", password);
	}
	printf("%c", 2772 - x);
	return (0);
}
