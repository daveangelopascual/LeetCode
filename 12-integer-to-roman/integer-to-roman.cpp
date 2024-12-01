class Solution {
public:
    string intToRoman(int num) {
        string romanNumeral = "";

        while (num != 0) {
            if (num / 1000 >= 1){
                num -= 1000;
                romanNumeral += 'M';
            }
            else if (num / 500 >= 1){
                if (num / 900 >= 1){
                    num -= 900;
                    romanNumeral += "CM";
                }
                else if (num / 500 >= 1){
                    num -= 500;
                    romanNumeral += 'D';
                }
            }
            else if (num / 100 >= 1){
                if (num / 400 >= 1){
                    num -= 400;
                    romanNumeral += "CD";
                }
                else {
                    num -= 100;
                    romanNumeral += "C";
                }
            }
            else if (num / 50 >= 1){
                if (num / 90 >= 1){
                    num -= 90;
                    romanNumeral += "XC";
                }
                else {
                    num -= 50;
                    romanNumeral += 'L';
                }
            }
            else if (num / 10 >= 1){
                if (num / 40 >= 1){
                    num -= 40;
                    romanNumeral += "XL";
                }
                else {
                    num -= 10;
                    romanNumeral += "X";
                }
            }
            else if (num / 5 >= 1){
                if (num / 9 >= 1){
                    num -= 9;
                    romanNumeral += "IX";
                }
                else {
                    num -= 5;
                    romanNumeral += 'V';
                }
            }
            else if (num / 1 >= 1){
                if (num / 4 >= 1){
                    num -= 4;
                    romanNumeral += "IV";
                }
                else {
                    num -= 1;
                    romanNumeral += "I";
                }
            }
        }
        return romanNumeral;
    }
};