class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        std::sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans = {{intervals[0][0], intervals[0][1]}};
        for (int i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0] > ans.back()[1])
                ans.push_back(intervals[i]);
            else
                ans.back()[1] = std::max(ans.back()[1], intervals[i][1]);
        }
        return ans;
    }
};
