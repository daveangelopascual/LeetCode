class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, mode;
        for (int i : nums) {
            if (count == 0)
                mode = i;
            if (mode == i)
                count++;
            else
                count--;
        }
        count = 0;
        for (int j : nums) {
            if (j == mode) {
                count++;
                if (count > (nums.size()/2))
                    return mode;
            }
        }
        return mode;
    }     
};