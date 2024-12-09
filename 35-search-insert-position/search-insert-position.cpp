class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                j = i;
                break;
            }
            else if (nums[i] > target) {
                j = i;
                break;
            }
            else if (i == nums.size()-1 && nums[i] < target)
                j = i+1;
        }
        return j;
    }
};