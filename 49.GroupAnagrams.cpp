class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> indexes;
        for(auto& str: strs) {
            const string tmp = str;
            sort(str.begin(), str.end());
            indexes[str].emplace_back(std::move(tmp));
        }
        vector<vector<string>> ans(indexes.size());
        int counter = 0;
        for(auto& items: indexes)
            ans[counter++] = std::move(items.second);
        return ans;
    }
};
