#include <string>
#include <map>

using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        map<char, int> s_map;
        map<char, int> t_map;

        for(int i = 0; i < s.length(); i++) {
            s_map[s[i]]++;
            t_map[t[i]]++;
        }

        return s_map == t_map;
    }
};
