class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n, i, j;
        if ( (n = matrix.size()) == 1 )
            return;
        
        for ( i = 0; i < n/2; ++i )
            swap(matrix[i], matrix[n-1-i]);
      
        for ( i = 0; i < n; ++i )
            for ( j = i + 1; j < n; ++j ) 
                swap(matrix[i][j], matrix[j][i]);
    }
};
