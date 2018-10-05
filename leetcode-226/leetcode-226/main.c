//翻转一棵二叉树。
//示例：
//输入：
//4
/// \
//2     7
/// \ / \
//1   3 6   9
//输出：
//4
/// \
//7     2
/// \ / \
//9   6 3   1

/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     struct TreeNode *left;
*     struct TreeNode *right;
* };
*/
struct TreeNode* invertTree(struct TreeNode* root) {
	if (root == NULL) //递归结束条件
		return NULL;
	struct TreeNode *temp = root->left;  //交换左右子树
	root->left = root->right;
	root->right = temp;
	invertTree(root->left); //化成左子树的子问题
	invertTree(root->right); //同理
	return root;
}