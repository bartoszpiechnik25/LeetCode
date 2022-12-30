class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (rowIndex == 0)
            return vector<int>(1, 1);
        vector<int> tab = {1, 1};
        for(int i = 1; i < rowIndex; ++i) {
            vector<int> aux = {1};
            for(int j = 1; j < tab.size(); ++j)
                aux.push_back(tab[j-1] + tab[j]);
            aux.push_back(1);
            tab = aux;
        }
        return tab;
    }
};
