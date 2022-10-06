#include "main.h"

/**
 * *array_range -  create an array of integers
 * @min: size of the array
 * @max: char to initialize
 * Return: pointer to the array initialized or NULL
 */

int *array_range(int min, int max)
{
int *m;
int i;

if (min > max)
	return (NULL);

m = malloc((max - min + 1) * sizeof(int));

if (m == 0)
	return (NULL);


for (i = 0; min + i <= max; i++)
	m[i] = min + i;

return (m);
}
