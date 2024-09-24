#include <stdio.h>

int main(void)
{
	int num1, num2, num3 = 0, num4, num5 = 8;
	for (num2 = 0; num2 < 5; num2++)
	{
		for (num1 = 4; num1 > num3; num1--)
		{
			printf(" ");
		}
		for (num4 = 9; num4 - num5 > 0; num4--)
			printf("*");
		num3 += 1;
		num5 -= 2;
		printf("\n");
	}
}