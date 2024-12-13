class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()); // sorts the vector from smallest to largest
        int maxPairs = 0, left = 0, right = nums.size()-1;
        
        while (left < right) { 
            if (nums[left]+nums[right] == k) {
                maxPairs++;
                nums[left++] = 0;
                nums[right--] = 0;
            }
            else if (nums[left]+nums[right] < k) //if the sum is smaller than target, increment the smaller number
                left++;
            else //if the sum is larger than target, decrement the larger number
                right--;
        }
        return maxPairs;
    }
};