class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, mode;
        for (int i : nums) {
            if (count == 0) //assigns value when count is 0
                mode = i;
            if (mode == i) // Boyer-Moore Voting Algorithm
                count++;
            else
                count--;
        }
        count = 0;
        for (int j : nums) {
            if (j == mode) {
                count++;
                if (count > (nums.size()/2)) //returns mode when count exceeds majority
                    return mode;
            }
        }
        return mode;
    }     
};