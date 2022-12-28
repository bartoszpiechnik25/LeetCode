class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i, n = (nums.size() - 1); 
        for(i = 0; i < n; ++i)
            nums[i + 1] = nums[i] ^ nums[i + 1];
        return nums[n];
    }
};
