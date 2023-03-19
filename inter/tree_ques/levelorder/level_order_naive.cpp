/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {  
        int h=height(root);
        for(int i=1;i<=h;i++)
        {
          print_curr(i,root);//print_curr(1,root)
                             //print_curr(2,root)
        }
    }
    
    void print_curr(int level,TreeNode *root)
    {
       if(root==NULL)
          // ans.push_back("null");
           return;
        
        if(level==1)
            cout<<root->val;
            //ans.push_back(root->val);

              else if(level>1)  //level keeps decreasing and you reach that node by following one left,right pointer each decrease
                                //when level==1 get to that node and print it

        {    print_curr(level-1,root->left); //print_curr(1,9) - output 9     // print_curr(3,3)  -> print_curr(2,9) -> print_curr(1,none)

             print_curr(level-1,root->right);//print_curr(1,20) -output  20                          print_curr(2,20) -> print_curr(1,15) 
                                                                                                                        //print_curr(1,7)
        } 
        
    }
    
    int height(TreeNode* node)
    {   
        if(node==NULL)
            return 0;
        else
        {
        int left=height(node->left);
        int right=height(node->right);
            
         return 1+max(left,right);
       }
    }
        
};