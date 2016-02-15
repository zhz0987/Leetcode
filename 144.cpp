/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<int> preorderTraversal(TreeNode* root)
{
	vector<int> v;
	if(root==NULL)
		return v;
	v.push_back(root->val);
	vector<int> temp;
	temp=preorderTraversal(root->left);
	v.insert(v.end(),temp.begin(),temp.end());
	temp=preorderTraversal(root->right);
	v.insert(v.end(),temp.begin(),temp.end());
	return v;
}