class Solution {
public:
    bool checkVowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' )
            return true;
        else
            return false;
    }

    int maxVowels(string s, int k) {
        int vowelCount = 0;

        for (int i = 0; i < k; i++) { //calculating starting window
            if (checkVowel(s[i]) == true)
                vowelCount++;
        }
        int maxCount = vowelCount; //initalizng maxCount

        for (int i = k; i < s.length(); i++) { //calculate sliding window across the array
            if (checkVowel(s[i-k]) == true)
                vowelCount--;

            if (checkVowel(s[i]) == true)
                vowelCount++;
            
            maxCount = max(maxCount, vowelCount);
        }

        return maxCount;
    }
};