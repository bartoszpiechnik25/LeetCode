struct Compare {
    bool operator()(const int& a, const int& b) { return a < b; }
};

class Solution {
public:
    int minStoneSum(vector<int>& piles, int& k) {
        priority_queue<int, vector<int>, Compare> numbers(piles.begin(), piles.end());
        while (k-- > 0) {
            int num = numbers.top() - (numbers.top() / 2);
            numbers.pop();
            numbers.emplace(num);
        }
        int sum = 0;
        while (!numbers.empty()) {
            sum += numbers.top();
            numbers.pop();
        }
        return sum;
    }
};
