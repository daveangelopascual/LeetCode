class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits[digits.size()-1] < 9)
            digits[digits.size()-1]++;
        else{
            for (int i = digits.size()-1; i >= 0; i--) {
                if (digits[i] == 9 && i != 0){
                    digits[i] = 0;
                }
                else if (digits[i] == 9) {
                    digits[i] = 1;
                    digits.push_back(0);
                    break;
                }
                else {
                    digits[i]++;
                    break;
                }
            }
        }
        return digits;
    }
};