class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0; 
        for (int i = 0; i < s.length(); i++){
            if (t.find(s[i],j) == string::npos)
                return false;
            else {
                j = t.find(s[i], j) + 1;

            }
        }
        return true;
    }
};