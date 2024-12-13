class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0.0;

    for (int i = 0; i < k; i++) { // Calculate the initial window sum
        sum += nums[i];
    }

    double avg = sum / k;

    for (int i = k; i < nums.size(); i++) { // Slide the window across the array
        sum += nums[i] - nums[i - k]; // Add the new element, remove the old one
        avg = max(avg, sum / k);
    }
    return avg;
    }
};