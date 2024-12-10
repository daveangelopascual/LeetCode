class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> factors;
        double runtime = sqrt(n);
        
        for (int i = n; i > runtime; i--) {
            if (n % i == 0)
                factors.push_back(n/i);
        }
        for (int j = runtime ; j > 0; j--) {
            if (n % j == 0) 
                factors.push_back(n/j);
        }
        if (k > factors.size())
            return -1;
        else
            return factors[k-1];
    }
};