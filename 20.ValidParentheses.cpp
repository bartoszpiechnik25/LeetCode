class Solution {
public:
    bool isValid(string s) {
        stack <char> parentheses_stack;
        map <char, char> valid {{'(', ')'}, {'[', ']'}, {'{', '}'}};
        for (auto& character: s) {
            if ( valid.find(character) != valid.end() )
                parentheses_stack.push(character);
            else {
                if ( parentheses_stack.empty() )
                    return false;
                auto tp = parentheses_stack.top();
                if ( character == valid[tp] )
                    parentheses_stack.pop();
                else
                    return false;
            }
        }
        return true ? parentheses_stack.empty(): false;
    }
};
