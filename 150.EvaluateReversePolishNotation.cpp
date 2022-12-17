class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <long long> rpn;
        auto is_operator = [&] (string s) -> bool { return true ? (s == "+" || s == "*" || s == "/" || s == "-"): false; };
        for ( const auto& ch: tokens ) {
            if ( !is_operator(ch) )
                rpn.push(stoi(ch));
            else {
                long long b = rpn.top();
                rpn.pop();
                long long a = rpn.top();
                rpn.pop();
                if ( ch == "+" )
                    rpn.push(a + b);
                else if ( ch == "-" )
                    rpn.push(a - b);
                else if ( ch == "/" )
                    rpn.push(a / b);
                else
                    rpn.push(a * b);
            }
        }
        return rpn.top();
    }
};
