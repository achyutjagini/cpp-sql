class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        //if root not present
        if(!root)
        return ans;

        queue<TreeNode*>q;

        //push root 

        q.push(root);

        while(!q.empty()){
            int s=q.size();
            vector<int>level;
            for(int i=0;i<s;i++){
                //for consider its subtree node on's for all
                TreeNode* node=q.front();
                q.pop();
                if(node->left!=NULL)
                q.push(node->left);

                if(node->right!=NULL)
                q.push(node->right);
                
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};