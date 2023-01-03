class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> corresponding;
        vector<string> words;
        string word;
        stringstream str_stream(s);
        while(getline(str_stream, word, ' '))
            words.emplace_back(word);
        if (pattern.size() != words.size())
            return false;
        char c;
        for(int i = 0; i < pattern.size(); ++i) {
            c = pattern[i];
            word = words[i];
            auto it = find_if(corresponding.begin(), corresponding.end(), [&c, &word](const auto& pair) {return (pair.first != c && pair.second == word);});
            if(corresponding.find(c) == corresponding.end() && it == corresponding.end())
                corresponding[c] = word;
            else {
                if (corresponding[c] != word)
                    return false;
            }
        }
        return true;
    }
};
