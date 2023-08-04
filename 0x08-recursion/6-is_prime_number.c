#include "main.h"

/**
 * isPrimeRec - checks if a number is a prime number
 * @n: integer
 * @div: integer
 * Return: int
 */
int isPrimeRec(int n, int div)
{
	if (div == 1)
		return (1);
	else if (n % div == 0)
		return (0);
	else
		return (isPrimeRec(n, div - 1));

}
/**
 * is_prime_number - checks if a number is prime number
 * @n: integer
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
	return (isPrimeRec(n, n - 1));
	}
}
