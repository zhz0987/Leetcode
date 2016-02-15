/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<int> inorderTraversal(TreeNode* root)
{
	vector<int> v;
	if(root==NULL)
		return v;
	
	vector<int> temp;
	temp=inorderTraversal(root->left);
	v.insert(v.end(),temp.begin(),temp.end());
	v.push_back(root->val);
	temp=inorderTraversal(root->right);
	v.insert(v.end(),temp.begin(),temp.end());
	return v;
}