class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int palindrome = 0, original = x;
        if (x < 0)
            return false;
        else {
            while (x != 0){
                palindrome = (palindrome * 10) + (x % 10);
                x /= 10;
            }
        }
        if (original == palindrome)
            return true;
        else
            return false;
    }
};