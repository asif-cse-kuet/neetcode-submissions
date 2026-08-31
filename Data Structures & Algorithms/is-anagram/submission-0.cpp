class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()==t.length())
        {
            unordered_map<char, int> string_s;
            unordered_map<char, int> string_t;
            for (int i=0; i<s.length(); i++)
            {
                string_s[s[i]]++;
                string_t[t[i]]++;
            }
            if (string_s == string_t) return true;
        }
        return false;
    }
};