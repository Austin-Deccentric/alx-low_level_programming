#include <stdio.h>
/**
* fizz_buzz- Prints numbers from 1 to 100.
* If number is a multiple of 3: print "Fizz" instead of the number;
* if number is a mulitple of 5: print "Buzz";
* if number is a multiple of 3 and 5: print "FizzBuzz."
*/

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		} else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else
			printf("%d ", i);
	}

	printf("\n");
}

/**
 * main- Entry Point of program.
 * Return: Always 0 (success).
 */
int main(void)
{
	fizz_buzz();

	return (0);
}

