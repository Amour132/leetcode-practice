//ʾ��:
//���� : 38
//��� : 2
// ���� : ��λ��ӵĹ���Ϊ��3 + 8 = 11, 1 + 1 = 2�� 
//���� 2 ��һλ�������Է��� 2��

#include <iostream>

using namespace std;

class Solution {
public:
	int addDigits(int num) {
		while (num >= 10){
			num = (num / 10) + num % 10;
		}
		return num;
	}
};

int main()
{
	int num = 123456789;
	int ret = 0;
	Solution s;
	ret = s.addDigits(num);
	cout << ret << endl;
	return 0;
}