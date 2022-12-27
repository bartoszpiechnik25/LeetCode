class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int i = 0, index = 0;
        for ( i; i < capacity.size(); ++i ) 
            capacity[i] -= rocks[i];
        std::sort(capacity.begin(), capacity.end());

        while ( additionalRocks > 0 && index < capacity.size() ) {
            additionalRocks -= capacity[index];
            ++index;
        }
        if ( additionalRocks < 0 )
            return --index;
        return index;
    }
};
