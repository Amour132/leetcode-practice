//�ж��Ƿ���ƽ�������
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
	int height(TreeNode* root){//��߶�
		if (root == NULL)
		{
			return 0;
		}
		int left = height(root->left);
		int right = height(root->right);
		if (left > right)
		{
			return left + 1;
		}
		else
		{
			return right + 1;
		}
	}
public:
	bool isBalanced(TreeNode* root)
	{
		if (root == NULL)
		{
			return true;
		}
		if (abs(height(root->left) - height(root->right)) > 1)//������1��ƽ��
		{
			return false;
		}
		return (isBalanced(root->left) && isBalanced(root->right));
	}
};