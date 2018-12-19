//求二叉树的层平均值
#include <vector>
#include <iostream>
#include <queue>
using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };


class Solution {
public:
	vector<double> averageOfLevels(TreeNode* root) {
		vector<double> average;
		queue<TreeNode*> q;
		q.push(root);
		long int sum = 0;
		int size;
		while (!q.empty())
		{
			sum = 0;
			size = (int)q.size();
			int ret = size;
			while (ret--)
			{
				TreeNode* tmp = q.front();
				q.pop();
				sum += tmp->val;
				if (tmp->left)
				{
					q.push(tmp->left);
				}
				if (tmp->right)
				{
					q.push(tmp->right);
				}
			}
			average.push_back((double)sum / size);
		}
		return average;
	}

};