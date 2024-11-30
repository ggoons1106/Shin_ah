#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


struct cities
{
	char Name[20];
	char Country[20];
	int Population;
};

int main(void)
{
	struct cities arr[3];
	int i;
	printf("Input three cities: \n");

	for (i = 0; i < 3; i++)
	{
		printf("Name> ");
		scanf(" %[^\n]", arr[i].Name);

		printf("Country> ");
		scanf(" %[^\n]", arr[i].Country);

		printf("Population> ");
		scanf("%d", &arr[i].Population);

		while (getchar() != '\n');
	}

	printf("\n");

	int j;
	printf("Printing the three cities: \n");
	for (j = 0; j < 3; j++)
		printf("%d. %s in %s with a population of %d people \n", j + 1, arr[j].Name, arr[j].Country, arr[j].Population);
	return 0;
}

