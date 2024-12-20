class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string smallestStr = strs[0];
        for (string i : strs) { 
            if (i == "") //checks if any strings in vector are empty
                return "";
            if (i.size() < smallestStr.size()) //finds smallest string size in vector
                smallestStr = i;
        }
        for (string str : strs) { //iterates over the length vector
            while (str.find(smallestStr) != 0) { //checks if each element in vector starts with same string
                smallestStr = smallestStr.substr(0, smallestStr.size() - 1); //decrease string size if false
                if (smallestStr == "") 
                    return "";
            }
        }
        return smallestStr;
    }
};