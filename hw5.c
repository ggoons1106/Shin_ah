#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Binary_Number(int num)
{
	int num1, num2;
	num1 = num / 2;
	num2 = num - num1 * 2;
	if (num1 == 1)
	{
		printf("%d", num1);
		printf("%d", num2);
	}
	else
	{
		Binary_Number(num1);
		printf("%d", num2);
	}
}

int main(void)
{
	int num1;
	printf("Please enter a number:");
	scanf("%d", &num1);
	Binary_Number(num1);
	return 0;
}