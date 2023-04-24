#include <stdio.h>

/**
 * This for loop will iterate 100 times filling the listed 3 nouns in, for
 * the multiples of 3, 5 and both 3 and 5 (15).
 */
int main()
{
	for (int x = 1; x <= 100; x++)
	{
		if (x % 15 == 0)
		{
			printf("fizzbuzz ");
		} else if (x % 3 == 0)
		{
			printf("fizz ");
		} else if (x % 5 == 0)
		{
			printf("buzz ");
		} else 
		{
			printf("%d ", x);
		}
	}

}
