#include "main.h"
#include <stdio.h>

/**
* print_array - prints an array
* @a: integer
* @n: integer
* Return: void
*/

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
_printf("%d", a[i]);
if (i == n - 1)
continue;
_printf(", ");
}
_printf("\n");
}
