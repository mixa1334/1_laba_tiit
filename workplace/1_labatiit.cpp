#include "1_labatiit.h"
void upd(int* arr, int* fenv, int number_of_element, int element, int size)
{
	arr[number_of_element] += element;
	while (number_of_element < size)
	{
		fenv[number_of_element] += element;
		number_of_element = (number_of_element | (number_of_element + 1));
	}
}

int sum(int x, int* arr)
{
	int result = 0;

	for (; x >= 0; x = (x & (x + 1)) - 1) {
		result += arr[x];
	}

	return result;
}

int SUM(int left, int right,int* arr)
{
	return sum(right, arr) - sum(left - 1,arr);
}