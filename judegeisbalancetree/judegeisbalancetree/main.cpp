//判断是否是平衡二叉树
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
	int height(TreeNode* root){//求高度
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
		if (abs(height(root->left) - height(root->right)) > 1)//相差大于1则不平衡
		{
			return false;
		}
		return (isBalanced(root->left) && isBalanced(root->right));
	}
};