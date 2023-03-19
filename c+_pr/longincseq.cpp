#include <cstring>
#include <iostream>
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
    
    int n=nums.size();
    vector<int> dp(n);
    
    //memset(dp,1,sizeof(dp));
    for (int i=0;i<n;i++)
    {
        dp[i]=1;
    }
        
    for(int i=1;i<nums.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(nums[i]>nums[j])
            {
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
        
    }
    
    int maxim=*max_element(dp.begin(),dp.end());
    return maxim;
          
        
        
    }
};