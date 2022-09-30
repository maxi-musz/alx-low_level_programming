#include <stdio.h>
#include <stdlib.h>
/**
 * isInteger - checks if s is an integer
 * @s: string to check
 * Return: 0 or 1
 */

int isInteger(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
	if (s[i] < '0' || s[i] > '9')
		return (0);
	i++;
}
return (1);
}

/**
 * main - adds positive numbers
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
int i = 0, coinUsed = 0, coin = 0;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
	printf("Error\n");
	return (1);
}
if (isInteger(argv[1]))
{
	i = atoi(argv[1]);
	while (i > 0 && coin <= 4)
	{
		if (i >= coins[coin])
		{
			i -= coins[coin];
			coinUsed++;
		}
		else
		{
			coin++;
		}
	}
}

printf("%i\n", coinUsed);

return (0);
}
