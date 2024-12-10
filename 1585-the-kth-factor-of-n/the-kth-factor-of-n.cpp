class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> factors;
        double runtime = sqrt(n);
        
        for (int i = 1; i < runtime; i++) {
            if (n % i == 0)
                factors.push_back(i);
        }
        for (int i = runtime; i > 0; i--) {
            if (n % i == 0) 
                factors.push_back(n/i);
        }
        if (k > factors.size())
            return -1;
        else
            return factors[k-1];
    }
};