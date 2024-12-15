class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum = 0, rightSum = 0, index = 0;
        for (int i = index + 1; i < nums.size(); i++)
                rightSum += nums[i]; 

        while (leftSum != rightSum && index < nums.size()-1){
            index++;
            leftSum += nums[index - 1];
            rightSum -= nums[index];
        }
        if (leftSum == rightSum)
            return index;
        else
            return -1;
    }
};