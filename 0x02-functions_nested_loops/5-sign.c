#include "main.h"

/**
 * print_sign - Entr point
 * @n: carrier variable
 * Description: prints the sign of a number
 * Return: 1 if n>0, 0 if n == 0, -1 if n<0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
_putchar('0');
return (0);
}
