class Solution {
public:
    bool checkVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' );
    }

    int maxVowels(string s, int k) {
        int vowelCount = 0, maxCount;

        for (int i = 0; i < k; i++) { //calculating starting window
            if (checkVowel(s[i]))
                vowelCount++;
        }
        maxCount = vowelCount; //initalizng maxCount

        for (int i = k; i < s.length(); i++) { //calculate sliding window across the array
            if (checkVowel(s[i-k]))
                vowelCount--;

            if (checkVowel(s[i]))
                vowelCount++;
            
            maxCount = max(maxCount, vowelCount); //for each window determine the max
        }
        return maxCount;
    }
};