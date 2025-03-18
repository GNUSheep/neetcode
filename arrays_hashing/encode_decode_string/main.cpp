class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_s = "";
        for(auto &s : strs) {
            encoded_s = encoded_s + to_string(s.length()) + ':' + s; 
        }

        return encoded_s;
    }

    vector<string> decode(string s) {
        vector<string> decoded_s = {}; 
        
        int i = 0;
        while (i < s.length()) {
            string world_len = "";
            while (s[i] != ':') {
                world_len = world_len + s[i];
                i++;
            }
            int world_len_int = stoi(world_len);
            
            decoded_s.push_back(s.substr(i+1, world_len_int));

            i = i + world_len_int + 1;
        }

        return (decoded_s);
    }
};
