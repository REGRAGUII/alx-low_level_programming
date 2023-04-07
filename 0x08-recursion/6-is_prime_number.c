#include "main.h"
/**
 * is_prime_number2 - returns 1 if the input integer is a prime number or 0.
 * @n: input int
 * @i: input int
 * Return: 0 or 1
 */
int is_prime_number2(int n, int i)
{
	if (i > n / 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_number2(n, i + 2));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number or 0
 * @n: input n
 * Return: always 0 or 1
 */
int is_prime_number(int n)
{
	int i = 3;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (is_prime_number2(n, i));
}
