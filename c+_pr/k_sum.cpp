class Solution {
    vector<vector<int>> k_sum(const vector<int> &nums, std::size_t start, 
                              int target, std::size_t k) {
        std::vector<std::vector<int>> result{};
        
        if (k >= 2 && k <= nums.size()) {
            if (k == 2) {
                auto end{nums.size() - 1};
                
                while (start < end) {
                    auto left{nums[start]};
                    auto right{nums[end]};
                    auto candidate{left + right};
                    
                    if (candidate == target) {
                        std::vector<int> res{};
                        res.push_back(left);
                        res.push_back(right);
                        result.push_back(res);
                        
                        for (; start < end && nums[start] == left; ++start) {}
                        for (; end > start && nums[end] == right; --end) {}
                    }
                    else if (candidate > target)
                        --end;
                    else
                        ++start;
                }
            }
            else {
                while (start < nums.size()) {
                    auto left{nums[start]};
                    auto smaller_result{k_sum(nums, start + 1, target - left, k - 1)};
                    for (const auto reduced : smaller_result) {
                        std::vector<int> candidate{};
                        candidate.push_back(left);
                        for (const auto elem : reduced)
                            candidate.push_back(elem);
                        
                        result.push_back(candidate);
                    }
                    for (; start < nums.size() && nums[start] == left; ++start) {}
                }
            }
        }
        
        return result;
    }
    
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        
        return k_sum(nums, 0, target, 4);
    }
};