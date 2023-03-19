class Solution {
public:
    int ans=0;    
    
    void solve (vector<int>& nums, int target,int curr,int idx, int n){
        if(idx==n && curr==target){
            ans++;
            return;
        }
        
        if(idx>=n){
            return;
        }
        
        solve ( nums, target,curr+nums[idx],idx+1,n);
        solve ( nums, target,curr-nums[idx],idx+1,n);
        
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int n=nums.size();
        solve ( nums, target,0,0,n);
        return ans;
    }

};
