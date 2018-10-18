//给定一个二进制数组， 计算其中最大连续1的个数。
//示例 1:
//输入 : [1, 1, 0, 1, 1, 1]
//输出 : 3
// 解释 : 开头的两位和最后的三位都是连续1，所以最大连续1的个数是 3.
//	  注意：
//	  输入的数组只包含 0 和1。
//	  输入数组的长度是正整数，且不超过 10, 000。

#include <stdio.h>

int findMaxConsecutiveOnes(int* nums, int numsSize) {
	int i = 0;
	int sum = 0;
	int maxsum = 0;
	for (i = 0; i<numsSize; i++)
	{
		if (nums[i] == 1)
		{
			sum++;
		}
		if (sum > maxsum)
		{
			maxsum = sum;
		}
		if (nums[i] == 0)
		{
			sum = 0;
		}
	}
	return maxsum;
}

int main()
{
	int arr[] = { 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1 };
	printf("%d ", findMaxConsecutiveOnes(arr, sizeof(arr) / sizeof(arr[0])));
	return 0;
}