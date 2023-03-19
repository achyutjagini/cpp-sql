class Solution {
public:
    int maxProduct(vector<int>& nums) {
         int curmax = nums[0], curmin = nums[0],result = nums[0];
    
    for(int i=1;i<nums.size();i++) {

        int temp = max({nums[i],curmax*nums[i],curmin*nums[i]});
        
        curmin = min({nums[i],curmax*nums[i],curmin*nums[i]});
        
        curmax = temp;
        
        result = max(result,curmax);
    }
    
    return result;   
        
    }
};
