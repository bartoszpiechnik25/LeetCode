class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto unique_nums = unique(nums.begin(), nums.end());
        nums.erase(unique_nums, nums.end());
        return nums.size();
    }
};
