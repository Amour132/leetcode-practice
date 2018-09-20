//leet-20
//给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
//有效字符串需满足：
//左括号必须用相同类型的右括号闭合。
//左括号必须以正确的顺序闭合。
//注意空字符串可被认为是有效字符串。
#include <iostream>
#include <stack>

using namespace std;
bool isValid(char* str)
{
	stack<char> s;
	while (*str)
	{
		if ((*str == '(') || (*str == '{') || (*str == '['))
		{//判断如果是左括号入栈
			s.push(*str);
			str++;
		}
		else if (((s.top() == '(') && (*str == ')'))
			|| ((s.top() == '{') && (*str == '}'))//判断是否匹配匹配就
			|| ((s.top() == '[') && (*str == ']')))//将栈顶pop
		{
			s.pop();
			str++;
		}
		else
		{
			return false;
		}		
	}
	if (s.empty()) //全部验证完后栈为空 即完全匹配
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
		cout << "匹配" << endl;
	}
	else
	{
		cout << "不匹配" << endl;
	}
	return 0;
}

////////////////////////////////////////////////////////////////////////////////
//leet-19
//给定一个链表，删除链表的倒数第 n 个节点，并且返回链表的头结点。
//示例：
//给定一个链表 : 1->2->3->4->5, 和 n = 2.
//只遍历一遍链表
//当删除了倒数第二个节点后，链表变为 1->2->3->5.

//定义两个指针一个快一个慢
//快的先走n步，然后两个一起走此时慢指针的next就是倒数第n个节点，删除即可
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
//给定一个整数数组和一个目标值，找出数组中和为目标值的两个数。
//你可以假设每个输入只对应一种答案，且同样的元素不能被重复利用。
//示例 :
//给定 nums = [2, 7, 11, 15], target = 9
//因为 nums[0] + nums[1] = 2 + 7 = 9
//所以返回[0, 1]

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