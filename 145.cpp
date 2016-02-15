/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<int> postorderTraversal(TreeNode* root)
{
	vector<int> v;
	if(root==NULL)
		return v;

	vector<int> temp;
	temp=postorderTraversal(root->left);
	v.insert(v.end(),temp.begin(),temp.end());
	temp=postorderTraversal(root->right);
	v.insert(v.end(),temp.begin(),temp.end());
	v.push_back(root->val);
	return v;
}