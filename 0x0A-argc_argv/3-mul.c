#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
(void)argc;

if (argc != 3)
{
	printf("Error\n");
	return (1);
}
printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
