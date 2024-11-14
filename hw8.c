#include <stdio.h>
#include <stdlib.h> 
#include <math.h>


void Standard_Deviation(int *arr)
{
	int Add_result = 0, result =0;
	double result1 = 0, result2 = 0, final_result = 0;
	for (int i = 0; i < 5; i++)
		Add_result += arr[i];
	double Divide_result = Add_result / 5;
	for (int j = 0; j < 5; j++)
	{
		int num1 = 2;
		result = arr[j] - Divide_result;
		result1 += (double) pow(result, num1);
	}
	result2 = result1 / 5;
	final_result = (double)sqrt(result2);
	printf("%.3lf", final_result);
}
int main()
{
	int arr[5] = { 0,0,0,0,0 };
	printf("Enter 5 real numbers: ");
	scanf_s("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	Standard_Deviation(arr);
}