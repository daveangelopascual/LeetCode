class Solution {
public:
    int romanToInt(string s) {
        int integer = 0, romanValues[13] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        for (int i = 0; i < s.length(); i++){
            if (s[i] == 'C' && s[i+1] == 'M'){
                integer += romanValues[11];
                i++;
            }
            else if (s[i] == 'C' && s[i+1] == 'D'){
                integer += romanValues[9];
                i++;
            }
            else if (s[i] == 'X' && s[i+1] == 'C'){
                integer += romanValues[7];
                i++;
            }
            else if (s[i] == 'X' && s[i+1] == 'L'){
                integer += romanValues[5];
                i++;
            }
            else if (s[i] == 'I' && s[i+1] == 'X'){
                integer += romanValues[3];
                i++;
            }
            else if (s[i] == 'I' && s[i+1] == 'V'){
                integer += romanValues[1];
                i++;
            }
            else if (s[i] == 'M')
                integer += romanValues[12];
            else if (s[i] == 'D')
                integer += romanValues[10];
            else if (s[i] == 'C')
                integer += romanValues[8];
            else if (s[i] == 'L')
                integer += romanValues[6];
            else if (s[i] == 'X')
                integer += romanValues[4];
            else if (s[i] == 'V')
                integer += romanValues[2];
            else if (s[i] == 'I')
                integer += romanValues[0];
        }
        return integer;
    }
};