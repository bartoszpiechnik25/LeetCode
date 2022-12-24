class Solution {
public:
    int maxDepth(string s) {
        int max = 0, counter = 0;
        for ( int i = 0; i < s.size(); ++i ) {
            if ( s[i] == '(' )
                counter++;
            else if ( s[i] == ')' )
                counter--;
            max = std::max(max, counter);
        }
        return max;
    }
};

class Solution {
public:
    int maxDepth(string s) {
        int max = 0, size;
        stack <char> parentheses;
        for ( const auto& character: s ) {
            if ( character == '(' )
                parentheses.push('(');
            else if ( character == ')' ){
                if ( (size=parentheses.size()) > max )
                    max = size;
                parentheses.pop();
            }
        }
        return max;
    }
};
