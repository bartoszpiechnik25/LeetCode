class Solution {
public:
    static int sum(int start, int end, const int* tab) {
        int sum = 0, i = start;
        for ( start; start < end; ++start)
            sum += tab[start];
        return sum;
    }
    int countVowelStrings(int n) {
        int tab[5] = {1, 1, 1, 1, 1};
        int i, j = 1;
        for ( j; j < n; ++j ) {
            for ( i = 0; i < 5; ++i )
                tab[i] = sum(i, 5, tab);
        }
        return sum(0, 5, tab);
    }
};
