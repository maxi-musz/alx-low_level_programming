#include "main.h"

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */


int _strlen(char *s)
{
int size = 0;
for (; s[size] != '\0'; size++)
;
return (size);
}

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_addChar (char *str, char c)
{
int size, i;
char *m;

size = _strlen(str);

m = malloc((size + 1) * sizeof(char) + 1);
if (m == 0)
	return (0);

for (i = 0; i <= size; i++)
	m[i] = str[i];

m[i + 1] = c;
m[i + 2] = '\0';

return (m);
}


/**
 * *nbr_spaces - return the number of occurent of a string
 * @s: string to check
 * Return: int
 */

unsigned int nbr_spaces(char *s)
{
	int i, cmpt = 0;

	for (i = 0; s[i + 1] != '\0'; i++)
	{
		if (s[i]  == ' ' && s[i + 1] != ' ')
			cmpt++;
	}

	return (cmpt + 1);
}


/**
  *strtow - split a sentence into multiple words.
  *@str: the string passed as argument.
  *Return: tokens
  */
char **strtow(char *str)
{
int i;
int spaces = nbr_spaces(str);
char **tokens = NULL;//malloc(sizeof(char *) * (spaces));
char *token;
int checkingSpace = 0;
int word = 0;

if (!tokens)
{
	printf("Failed");
	return (0);
}
	

printf("looping");
for (i = 0; str[i] != '\0'; i++)
{
	if (str[i] == ' ')
	{
		if (checkingSpace == 0)
		{
			word++;
			checkingSpace = 1;
		} 
	}
	else
	{
		printf("1");
		token = tokens[word];
		free(tokens[word]);
		str_addChar(token, str[i]);
		checkingSpace = 0;
	}

}

tokens[i] = NULL;

return (tokens);
}
