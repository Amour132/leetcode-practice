//����һ�����ʣ�����Ҫ�жϵ��ʵĴ�дʹ���Ƿ���ȷ��
//���Ƕ��壬���������ʱ�����ʵĴ�д�÷�����ȷ�ģ�
//ȫ����ĸ���Ǵ�д������"USA"��
//������������ĸ�����Ǵ�д������"leetcode"��
//������ʲ�ֻ����һ����ĸ��ֻ������ĸ��д�� ���� "Google"��
//�������Ƕ����������û����ȷʹ�ô�д��ĸ��

class Solution 
{
public:
	bool detectCapitalUse(string word)
	{
		int count = 0;
		int i = 0;
		for (i = 0; i<word.size(); i++)
		{
			if (word[i] >= 'A' && word[i] <= 'Z')
			{
				count++;
			}
		}
		if (count == 0 || count == word.size() || 
		   (count == 1 && word[0] <= 'Z' && word[0] >= 'A'))
		{
			return true;
		}
		return false;
	}
};