//����һ�����������飬 ���������������1�ĸ�����
//ʾ�� 1:
//���� : [1, 1, 0, 1, 1, 1]
//��� : 3
// ���� : ��ͷ����λ��������λ��������1�������������1�ĸ����� 3.
//	  ע�⣺
//	  ���������ֻ���� 0 ��1��
//	  ��������ĳ��������������Ҳ����� 10, 000��

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