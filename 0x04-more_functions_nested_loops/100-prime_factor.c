#include <stdio.h>
#include <math.h>
/**
 * main - print_most_numbers.
 * @val: unsigned long input to putchar
 * Return: product
 */


int isprime(unsigned long val);
int main(void)
{
	unsigned long  int prime, ret;
	unsigned long int check, second, i;

	second = 612852475143;
	for (i = 2; i <= second; i++)
	{
		check = isprime(i);
		if (check)
		{
			prime = i;
			if (second % prime == 0)
				ret = prime;
		}
	}
	printf("%ld\n", ret);
	return (0);
}


/**
 * isprime - find prime number.
 * @val: unsigned long input to putchar
 * Return: 1 for prime number
 */
int isprime(unsigned long val)
{
	unsigned long int maxtest, i;
	int ret;

	ret = 1;
	maxtest = ceil(sqrt((double) val));
	for (i = 2; i < maxtest; i++)
	{
		if (!(val % i))
			ret = 0;
	}
	return (ret);
}
