#include <stdio.h>
/**
* main - prints Fizz(3) and Buzz(5) and FizzBuzz(3+5)
* Return: int 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

	if (i % 3 == 0)
	{
	printf("Fizz ");
	continue;
	}

	if (i % 5 == 0)
	{
	printf("Buzz ");
	continue;
	}

	if (i % 3 == 0 && i % 5 == 0)
	{
	printf("FizzBuzz ");
	continue;
	}
	printf("%d ", i);
	}
	return 0;
}
