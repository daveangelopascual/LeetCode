class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> maxCandies;
        for (int i = 0; i < candies.size(); i++) {
            bool greaterThanMax = true;
            for (int j = 0; j < candies.size();j++) {
                if (candies[i] + extraCandies < candies[j] && i != j) {
                    maxCandies.push_back(false);
                    greaterThanMax = false;
                    break;
                }
            }
            if (greaterThanMax == true)
                maxCandies.push_back(true);
        }
        return maxCandies;
    }
};