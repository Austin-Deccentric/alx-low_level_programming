#include "holberton.h"
/**
* times_table- Prints the times table form 0 - 9
*/
void times_table(void)
{
	int i = 0;
	int j, ret, next_ret;

	for (; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			ret = i * j;
			next_ret = i * (j + 1);
			if (ret > 9)
			{
				_putchar('0' + (ret / 10));
				_putchar('0' + (ret % 10));
			}
			else
				_putchar('0' + ret);

			if (j < 9)
			{

				_putchar(',');
				_putchar(' ');

				if (next_ret <= 9)
					_putchar(' ');

			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
