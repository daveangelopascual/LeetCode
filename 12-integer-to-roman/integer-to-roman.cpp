class Solution {
public:
    string intToRoman(int num) {
        string romanNumeral = "";
        int countC = 0, countX = 0, countI = 0, testNum = 0;

        while (num != 0) {
            while (num / 1000 >= 1){
                num -= 1000;
                romanNumeral += 'M';
            }
            while (num / 500 >= 1){
                if (num / 900 >= 1){
                    num -= 900;
                    romanNumeral += "CM";
                }
                else if (num / 500 >= 1){
                    num -= 500;
                    romanNumeral += 'D';
                }
            }
            while (num / 100 >= 1){
                if (num / 400 >= 1){
                    num -= 400;
                    romanNumeral += "CD";
                }
                else {
                    num -= 100;
                    romanNumeral += "C";
                }
            }
            while (num / 50 >= 1){
                if (num / 90 >= 1){
                    num -= 90;
                    romanNumeral += "XC";
                }
                else {
                    num -= 50;
                    romanNumeral += 'L';
                }
            }
            while (num / 10 >= 1){
                if (num / 40 >= 1){
                    num -= 40;
                    romanNumeral += "XL";
                }
                else {
                    num -= 10;
                    romanNumeral += "X";
                }
            }
            while (num / 5 >= 1){
                if (num / 9 >= 1){
                    num -= 9;
                    romanNumeral += "IX";
                }
                else {
                    num -= 5;
                    romanNumeral += 'V';
                }
            }
            while (num / 1 >= 1){
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