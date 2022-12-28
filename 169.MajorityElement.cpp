class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> numbers;
        int i = 0, n = nums.size();
        for(i; i < n; ++i)
            ++numbers[nums[i]];
        return std::max_element(numbers.begin(), numbers.end(), [](const auto& p1, const auto& p2) { return p1.second < p2.second; }) -> first;
    }
};
