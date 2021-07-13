#include <stdio.h>
#include <math.h>

/**
* - 
* @:
* Return:
*/

long maxPrimeFactors(long n)
{
	long maxprime, i, result;

	while (n % 2 == 0)
	{
		maxprime = 2;
		n /= 2;
	}

	/* At this point n is odd */
	
	result = sqrtl((long double) n);

	for (i = 3; i <= result; i += 2)
	{
		while (n % i == 0)
		{
			maxprime = i;
			n /= i;
		}

		if (n == 1)
			break;
	}

	if (n  > 2)
		maxprime = n;

	return maxprime;
}
  
/* Driver program to test above function */
int main()
{
    long n = 1231952;
    printf("%ld\n", maxPrimeFactors(n));
  
    n = 25698751364526;
    printf("%ld\n", maxPrimeFactors(n));
  
    return 0;
}

