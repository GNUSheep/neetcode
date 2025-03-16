#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> map_str = {};
        for(int i = 0; i < strs.size(); i++) {
            vector<int> letters(26, 0);
            for(int j = 0; j < strs[i].length(); j++) {
                letters[int(strs[i][j]) - int('a')]++;
            }

            map_str[letters].push_back(strs[i]);
        }

        vector<vector<string>> res = {};
        for(auto it = map_str.begin(); it != map_str.end(); it++) {
            res.push_back(it->second);     
        }

        return res;
    }
};
