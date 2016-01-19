/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

bool isSameTree(TreeNode* p, TreeNode* q) {
    if(!p && !q)
    	return true;
    if(!p || !q)
    	return false;
    else
    	return (p->val==q->val) && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
}