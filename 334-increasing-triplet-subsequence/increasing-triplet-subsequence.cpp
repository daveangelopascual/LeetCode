class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int smallest = INT_MAX, smaller = INT_MAX;
        for (int i :nums){
            if (i <= smallest) //replaces if a smallest number is found
                smallest = i;
            
            else if (i <= smaller) //replaces if a smaller number is found
                smaller = i;
            
            else //if smallest and smaller number was found, then the third number will always be greater
                return true;
        }
        return false;
    }
};