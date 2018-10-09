#include <stdio.h>

void InsertSort(int *arr, int length)
{
	int i = 0;
	for (i = 1; i < length; i++)
	{
		int j = i - 1;
		int temp = arr[i];
		while (temp < arr[j] && j > 0)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}
}

bool containsDuplicate(int* nums, int numsSize) {
	InsertSort(nums, numsSize);
	int i = 0;
	for (i = 0; i<numsSize - 1; i++)
	{
		if (nums[i] == nums[i + 1])
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int *arr = { 1, 2, 3, 3, 4, 5, 6 };
	bool ret;
	ret = containsDuplicate(arr, sizeof(arr) / sizeof(arr[0]));
	return 0;
}