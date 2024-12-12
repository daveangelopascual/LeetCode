class Solution {
public:
    bool checkVowel (char s){
        if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
            return true;
        else if (s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U')
            return true;
        else 
            return false;
    }
    string reverseVowels(string s) {
        int i = 0, j = s.length()-1;
        while (i < j) {
        
            while (i < j && !checkVowel(s[i])) // Move i forward until a vowel is found
                i++;
            
            while (i < j && !checkVowel(s[j])) // Move j backward until a vowel is found
                j--;
            
            if (i < j) { // Swap the vowels
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};