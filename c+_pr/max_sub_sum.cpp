class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxc=nums[0];
        int maxr=nums[0];
        int minc=nums[0];
        int minr=nums[0];
        int sum=nums[0];

        for(int i=1;i<nums.size();i++){
            maxc=max(nums[i],nums[i]+maxc);
            maxr=max(maxr,maxc);
            
            minc=min(nums[i],nums[i]+minc);
            minr=min(minc,minr);
            sum=sum+nums[i];
        }
        if(sum==minr)
            return maxr;
        return max(maxr,sum-minr);
    }
};