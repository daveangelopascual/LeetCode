class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0, maxAlt = 0;
        for (int i : gain) {
            sum += i;
            maxAlt = max(maxAlt, sum);
        }
        return maxAlt;
    }
};