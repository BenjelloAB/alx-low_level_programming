#include <stdio.h>
/**
 * main - prints fibonacci nums in the first 50 nums
 * Return: 0
 */
int main(void)
{
	int c;

	unsigned long f1 = 0, f2 = 1, sum;
	for (c = 0; c < 50; c++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
