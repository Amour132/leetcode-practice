//����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬
//����ÿ��Ԫ�ؾ��������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�
//˵����
//����㷨Ӧ�þ�������ʱ�临�Ӷȡ� ����Բ�ʹ�ö���ռ���ʵ����
//ʾ�� 1:
//���� : [2, 2, 1]
//��� : 1
//	 ʾ�� 2 :
// ���� : [4, 1, 2, 1, 2]
//  ��� : 4
#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
	int i = 0;
	int ret = nums[0];
	for (i = 1; i<numsSize; i++)
	{
		ret ^= nums[i];
	}
	return ret;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1 };
	int ret = singleNumber(arr, sizeof(arr) / sizeof(arr[0]));
	printf("%d ", ret);
	return 0;
}