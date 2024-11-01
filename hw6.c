#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 0;
	int arr[5] = { 0,0,0,0,0 };
	int odd[5];
	int even[5];
	printf("Please input five integers: ");
	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even[num1] = arr[i];
			num1 += 1;
		}
		else
		{
			odd[num2] = arr[i];
			num2 += 1;
		}
	}
	printf("Odd numbers: ");
	for (int j = 0; j < num2; j++)
		printf("%d ", odd[j]);
	printf("\n");
	printf("Even numbers: ");
	for (int j = 0; j < num1; j++)
		printf("%d ", even[j]);
	return 0;
}
