#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num3 = 0;
	printf("Please enter a number:");
	scanf("%d", &num1);
	for (int num2 = 1; num2 <= num1; num2++)
	{
		if (num1 % num2 == 0)
			num3 += 1;
	}
	if (num3 == 2)
		printf("It is a prime number");
	else
		printf("It is not a prime number");
	return 0;
}
