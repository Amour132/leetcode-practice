//����һ������ nums����дһ������������ 0 �ƶ��������ĩβ��
//ͬʱ���ַ���Ԫ�ص����˳��
//ʾ�� :
//���� : [0, 1, 0, 3, 12]
//��� : [1, 3, 12, 0, 0]

#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
	int i = 0;
	int j = 0;
	for (j = 0; j<numsSize - 1; j++)
	{
		for (i = 0; i<numsSize - 1 - j; i++)
		{
			if (nums[i] == 0 && nums[i + 1] != 0)
			{
				int temp = nums[i];
				nums[i] = nums[i + 1];
				nums[i + 1] = temp;
			}
		}
	}
}

void Print(int *arr, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 1, 0, 3, 0, 12 };
	int size = sizeof(arr) / sizeof(arr[0]);
	Print(arr, size);
	moveZeroes(arr, size);
	Print(arr, size);
	return 0;
}