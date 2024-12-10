class Solution {
public:
    int partitionString(string s) {
        vector<string> partitions; //to hold the partitions
        string subStr = ""; // will be use as a partition

        for (int i = 0; i < s.length(); i++) {
            if (i == s.length()-1) { //if the iteration is on the last element of s
                if (subStr.find(s[i]) == string::npos) { //if char is unique within subStr
                    subStr += s[i];
                    partitions.push_back(subStr);
                }
                else {
                    partitions.push_back(subStr);
                    subStr = s[i];
                    partitions.push_back(subStr);
                }
            } /*
            else if (s.find(s[i], i+1) == string::npos) {//if char is unique within s
                if (subStr.find(s[i]) == string::npos) //if char is unique within subStr
                    subStr += s[i];
                
                else {
                    partitions.push_back(subStr);
                    subStr = s[i];
                }
            } */
            else {
                if (subStr.find(s[i]) == string::npos) //if char is unique within subStr
                    subStr += s[i];
                
                else {
                    partitions.push_back(subStr);
                    subStr = s[i];
                }
            }
        }
        return partitions.size(); //return no. of partitions in vector
    }
};