//����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ����������������
//���Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
//����Լ������������ظ�Ԫ�ء�
//ʾ�� 1:
//���� : [1, 3, 5, 6], 5
//��� : 2
//ʾ�� 2 :
//���� : [1, 3, 5, 6], 2
//��� : 1
//ʾ�� 3 :
//���� : [1, 3, 5, 6], 7
//��� : 4
//ʾ�� 4 :
//���� : [1, 3, 5, 6], 0
//��� : 0
#include <stdio.h>

int searchInsert(int *arr, int length,int target)
{
	int i = 0;
	int ret = 0;
	for (i = 0; i < length; i++)
	{
		if (arr[i] == target) //����ҵ������±�
		{
			return i;
		}
		if (arr[i] < target)//���С��Ҫ��������ּ�¼�±��ϸ���
		{
			ret = i;
		}
	}
	if (target>arr[0])//��ֹ����Ҫ�����λ���ǵ�һ��
	{
		return ret + 1;
	}
	return 0;
}

int main()
{
	int arr[] = { 1,3,5,6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("%d", searchInsert(arr, size,0));

	return 0;
}