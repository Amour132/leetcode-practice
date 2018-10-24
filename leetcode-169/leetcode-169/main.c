//给定一个大小为 n 的数组，找到其中的众数。
//众数是指在数组中出现次数大于 ⌊ n / 2 ⌋ 的元素。
//你可以假设数组是非空的，并且给定的数组总是存在众数。
//示例 1:
//输入 : [3, 2, 3]
//输出 : 3
//	 示例 2 :
// 输入 : [2, 2, 1, 1, 1, 2, 2]
//  输出 : 2
#include <stdio.h>

void QuickSort(int *arr, int start, int end)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	if (start<end)
	{
		i = start + 1;
		j = end;
		while (i<j)
		{
			if (arr[i]>arr[start])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				j--;
			}
			else
			{
				i++;
			}
		}
		if (arr[i] >= arr[start])
		{
			i--;
		}
		temp = arr[i];
		arr[i] = arr[start];
		arr[start] = temp;
		QuickSort(arr, start, i);
		QuickSort(arr, j, end);
	}
}

int majorityElement(int* nums, int numsSize) {

	QuickSort(nums, 0, numsSize - 1);
	return nums[(numsSize - 1) / 2];

}

int main()
{
	int arr[] = { 1, 2, 3, 2, 2, 2, 2, 2, 4, 4, 5, 6, 4, 2, 2, 2, 2, 2, 2, };
	majorityElement(arr, sizeof(arr) / sizeof(arr[0]));
	return 0;
}