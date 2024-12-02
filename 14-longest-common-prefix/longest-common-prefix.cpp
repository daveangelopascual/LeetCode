class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        vector<string> compare(strs.size(), "");
        string smallestStr = strs[0];
        for (string i : strs){ 
            if (i == "") //check if any strings in vector are empty
                return "";
            if (i.size() < smallestStr.size()) //finds smallest string size in vector
                smallestStr = i;
        }
        int i = 0;
        while (i < smallestStr.size()) {
            
            for (int k = 0; k < strs.size(); k++) //iterates over the length vector
                compare[k] += strs[k][i]; //adds next char to the compare vector

            for (string j : compare) {
                if (compare[0] != j) {
                    if (i == 0)
                        return "";
                    else
                        return compare[0].substr(0, i);
                }
            }
            i++;
        }
        return compare[0];
    }
};