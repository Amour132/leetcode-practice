//��תһ�ö�������
//ʾ����
//���룺
//4
/// \
//2     7
/// \ / \
//1   3 6   9
//�����
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
	if (root == NULL) //�ݹ��������
		return NULL;
	struct TreeNode *temp = root->left;  //������������
	root->left = root->right;
	root->right = temp;
	invertTree(root->left); //������������������
	invertTree(root->right); //ͬ��
	return root;
}