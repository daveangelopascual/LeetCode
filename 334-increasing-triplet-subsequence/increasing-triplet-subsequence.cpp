class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int smallest = INT_MAX, middle = INT_MAX;
        for (int i :nums){
            if (i <= smallest) //replaces if a smallest number is found
                smallest = i;
            
            else if (i <= middle) //replaces if a middle number is found
                middle = i;
            
            else //if smallest and middle number was found, then the third number will always be greater
                return true;
        }
        return false;
    }
};