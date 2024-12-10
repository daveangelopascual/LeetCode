class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        if (word1.length() == word2.length()) {
            for (int i = 0; i < word1.length(); i++) {
                merged += word1[i];
                merged += word2[i];
            }
        }
        else if (word1.length() < word2.length()) {
            for (int i = 0; i < word1.length(); i++) {
                merged += word1[i];
                merged += word2[i];
                if (i == word1.length()-1){
                    for (int j = i + 1; j < word2.length(); j++)
                        merged += word2[j];
                }
            }
        }
        else {
            for (int i = 0; i < word2.length(); i++) {
                merged += word1[i];
                merged += word2[i];
                if (i == word2.length()-1){
                    for (int j = i + 1; j < word1.length(); j++)
                        merged += word1[j];
                }
            }
        }
        return merged;
    }
};