class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.length() - 1;
        while (i >= 0 && s[i] == ' ') // Trim trailing spaces
            i--;
        while (i >= 0 && s[i] != ' ') { // Count the length of the last word
            length++;
            i--;
        }
        return length;
    }
};