class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> original;
        vector<int> reversed;
        if (x < 0)
            return false;
        else {
            while (x != 0){
                original.push_back(x % 10);
                reversed.push_back(x % 10);
                x /= 10;
            }
        }
        reverse(reversed.begin(),reversed.end());
        if (original == reversed)
            return true;
        else
            return false;
    }
};