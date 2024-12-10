class Solution {
public:
    int partitionString(string s) {
        vector<string> partitions; //to hold the partitions
        string subStr = ""; // will be use as a partition

        for (int i = 0; i < s.length(); i++) {
            char letter = s[i];
            if (i == s.length()-1) { //if the iteration is on the last element of s
                if (subStr.find(letter) == string::npos) { //if char is unique within subStr
                    subStr += letter;
                    partitions.push_back(subStr);
                }
                else {
                    partitions.push_back(subStr);
                    subStr = letter;
                    partitions.push_back(subStr);
                }
            }
            else {
                if (subStr.find(letter) == string::npos) //if char is unique within subStr
                    subStr += letter;
                
                else {
                    partitions.push_back(subStr);
                    subStr = letter;
                }
            }
        }
        return partitions.size(); //return no. of partitions in vector
    }
};