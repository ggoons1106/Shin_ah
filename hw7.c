#include<stiod.h>

int main(void)
{
	printf("arr1:");
	for (int i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\n");
	printf("arr2:");
	for (int i = 0; i < 6; i++)
		printf("%d ", arr2[i]);
	printf("\n");
	printf("\n");

	for (int i = 0; i < 6; i++)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		*ptr2--;
		*ptr1++;
	}
	printf("after swap \n");
	printf("arr1:");
	for (int i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\n");
	printf("arr2:");
	for (int i = 0; i < 6; i++)
		printf("%d ", arr2[i]);
	return 0;
}
