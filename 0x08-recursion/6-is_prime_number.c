#include "main.h"
/**
 * int is_prime_number -  returns 1 if the input integer is a prime number, otherwise return 0
 * Return: =
 * @n: input int
 * @i: input int
 * is_prime_number2 - calculate if a number is prime recursively
 */
int is_prime_number2(int n, int i);
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	return (actual_prime(n, n - 1));
}
int is_prime_number2(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
