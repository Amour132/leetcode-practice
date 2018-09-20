//leet-20
//����һ��ֻ���� '('��')'��'{'��'}'��'['��']' ���ַ������ж��ַ����Ƿ���Ч��
//��Ч�ַ��������㣺
//�����ű�������ͬ���͵������űպϡ�
//�����ű�������ȷ��˳��պϡ�
//ע����ַ����ɱ���Ϊ����Ч�ַ�����
#include <iostream>
#include <stack>

using namespace std;
bool isValid(char* str)
{
	stack<char> s;
	while (*str)
	{
		if ((*str == '(') || (*str == '{') || (*str == '['))
		{//�ж��������������ջ
			s.push(*str);
			str++;
		}
		else if (((s.top() == '(') && (*str == ')'))
			|| ((s.top() == '{') && (*str == '}'))//�ж��Ƿ�ƥ��ƥ���
			|| ((s.top() == '[') && (*str == ']')))//��ջ��pop
		{
			s.pop();
			str++;
		}
		else
		{
			return false;
		}		
	}
	if (s.empty()) //ȫ����֤���ջΪ�� ����ȫƥ��
	{
		return true;
	}
	return false;

}
int main()
{
	
	char *str = "{{{{{}}}}}";
	bool ret = isValid(str);
	if (ret == true)
	{
		cout << "ƥ��" << endl;
	}
	else
	{
		cout << "��ƥ��" << endl;
	}
	return 0;
}

////////////////////////////////////////////////////////////////////////////////
//leet-19
//����һ������ɾ������ĵ����� n ���ڵ㣬���ҷ��������ͷ��㡣
//ʾ����
//����һ������ : 1->2->3->4->5, �� n = 2.
//ֻ����һ������
//��ɾ���˵����ڶ����ڵ�������Ϊ 1->2->3->5.

//��������ָ��һ����һ����
//�������n����Ȼ������һ���ߴ�ʱ��ָ���next���ǵ�����n���ڵ㣬ɾ������
class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		if (head == NULL)
		{
			return head;
		}
		struct ListNode *myHead = new ListNode(0);
		myHead->next = head;
		struct ListNode *fast = myHead;
		struct ListNode *slow = myHead;
		for (int i = 0; i < n; i++)
		{
			fast = fast->next;
		}
		while (fast->next != NULL)
		{
			fast = fast->next;
			slow = slow->next;
		}
		fast = slow->next;
		slow->next = slow->next->next;
		free(fast);
		return myHead->next;

	}
};
///////////////////////////////////////////////////////////////////////////////
//leetcode1
//����һ�����������һ��Ŀ��ֵ���ҳ������к�ΪĿ��ֵ����������
//����Լ���ÿ������ֻ��Ӧһ�ִ𰸣���ͬ����Ԫ�ز��ܱ��ظ����á�
//ʾ�� :
//���� nums = [2, 7, 11, 15], target = 9
//��Ϊ nums[0] + nums[1] = 2 + 7 = 9
//���Է���[0, 1]

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> twosum;
		for (int i = 0; i<nums.size() - 1; i++)
		{
			for (int j = i + 1; j<nums.size(); j++)
			{
				if (nums[i] + nums[j] == target)
				{
					twosum.push_back(i);
					twosum.push_back(j);
				}
			}
		}
		return twosum;

	}
};