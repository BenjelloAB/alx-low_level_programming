#include "main.h"
/**
 * get_endianness - check for endianness
 * Return: int
 */
int get_endianness(void)
{
	int n = 1;
	char *e = (char *)&n;

	if (*e == 1)
		return (1);
	return (0);
}
