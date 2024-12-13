class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> products;
        long int product = 1;
        int zeroCount = 0;

        for (int i : nums) {
            product *= i;
            if (i == 0)
                zeroCount++;
        }
        if (zeroCount != 1) {
            for (int i : nums) 
                if (i != 0) //cannot divide by 0
                    products.push_back(product / i);
                else
                    products.push_back(product);
        }
        else { //when there is 1 zero in the vector
            product = 1;
            for (int i : nums) {
                if (i != 0)
                    product *= i;
            }
            for (int i : nums) {
                if (i != 0)
                    products.push_back(0);
                else
                    products.push_back(product);
            }
        }
        
        return products;
    }
};