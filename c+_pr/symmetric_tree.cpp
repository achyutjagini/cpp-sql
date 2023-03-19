/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

bool solve(TreeNode* ptr1,TreeNode* ptr2){
    
    if(ptr1==NULL || ptr2==NULL)
        return ptr1==ptr2;
    
    return (ptr1->val==ptr2->val)&&solve(ptr1->right,ptr2->left)&&solve(ptr1->left,ptr2->right);
}
    
bool isSymmetric(TreeNode* root) {
    if(root==NULL)
        return true;
    
    return solve(root->left,root->right);    
}
    
};