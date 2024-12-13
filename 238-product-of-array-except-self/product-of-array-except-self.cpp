class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long int product = 1;
        int zeroCount = 0;

        for (int i : nums) { //used to count the zeros in sequence
            if (i == 0)
                zeroCount++;
        }
        for (int i : nums) { //used to calculate product based on zeroCount
            if (zeroCount == 1){
                if (i != 0)
                    product *= i;
            }
            else
                product *= i;
        }

        
        for (int i = 0; i < nums.size(); i++) {
            if (zeroCount != 1) {    
                if (nums[i] != 0) //cannot divide by 0
                    nums[i] = product / nums[i];
                else
                    nums[i] = product;
            }
            else {
                if (nums[i] != 0) 
                    nums[i] = 0;
                else
                    nums[i] = product;
                
            }
        }
        return nums;
    }
};