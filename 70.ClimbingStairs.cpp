class Solution {
public:
    int climbStairs(int n) {
        if ( n == 1 || n == 2 )
            return n;
        int a = 1, b = 2, c = 0, i = 2;
        for ( i; i < n; i++ ) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};
