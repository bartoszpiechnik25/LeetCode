class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int, int> nums;
        int i, j, num, num_1, n = nums2.size();
        for ( i = 0; i < n - 1; ++i ) {
            j = i + 1;
            num = nums2.at(i);
            while ( j < n ) {
                if ( (num_1 = nums2.at(j)) > num )
                    break;
                j++;
            }
            if ( j == n )
                nums[num] = -1;
            else
                nums[num] = num_1;
        }
        nums[nums2.at(n-1)] = -1;
        
        for ( i = 0; i < nums1.size(); ++i ) {
            nums1[i] = nums[nums1[i]];
        }
        return nums1;
    }
};
