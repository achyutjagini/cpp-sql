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
    vector<int>ans;
    int ma;
    void solve(TreeNode* root,int cur){
        if(!root)return;
        if(cur>ma){ma = cur;ans.push_back(root->val);}
        solve(root->right,cur+1);
        solve(root->left,cur+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        ans.clear();
        ma = 0;
        solve(root,1);
        return ans;
    }
};