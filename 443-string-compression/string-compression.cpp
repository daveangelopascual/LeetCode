class Solution {
public:
    
    void notSingleDigit(int& index, int x, vector<char>& chars) {
        vector<int> digits;
        while (x != 0) {
            digits.push_back(x%10);
            x /= 10;
        }
        for (int i = digits.size()-1; i >= 0; i--)
            chars[index++] = '0' + digits[i];
    }
    
    int compress(vector<char>& chars) {
        if (chars.size() == 1)
            return 1;
        int j = 0, count = 0;
        char compare = chars[0];
        chars[j++] = compare;
        for (char i : chars) {
            if (i == compare) 
                count++;
            else {
                if (count == 1) {
                    compare = i;
                    chars[j++] = compare;
                }
                else{
                    if (count < 10)
                        chars[j++] = '0' + count;
                    else 
                        notSingleDigit(j, count, chars);
                        
                    count = 1;
                    compare = i;
                    chars[j++] = compare;    
                }
            }
        }
        if (count != 1){
            if (count < 10)
                chars[j++] = '0' + count;
            else 
                notSingleDigit(j, count, chars);
        }
        return j;
    }
};