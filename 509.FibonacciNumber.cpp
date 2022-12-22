class Solution {
public:
    int fib(int n) {
        if ( n < 2 ) return n;
        int first = 0, second = 1, i = 2, tmp;
        for ( i; i <= n; ++i ) {
            tmp = first + second;
            first = second;
            second = tmp;
        }
        return second;
    }
};
