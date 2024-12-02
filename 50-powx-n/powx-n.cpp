class Solution {
public:
    double myPow(double x, int n) {
        if (x == 0) //base case for when x = 0
            return 0;

        if (n == INT_MIN) { //avoids overflow when negating INT_MIN
            x = 1 / x;
            n = INT_MAX;
            return x * myPow(x, n); 
        }
        if (n == 0) //base case for when n = 0
            return 1;

        if (n < 0) { //if exponent is neg
            x = 1 / x;
            n = -n;
        }

        if (n % 2 == 1)
            return x * myPow(x * x, n / 2); //recursive odd exponenet
        else
            return myPow(x * x, n / 2); //recursive even exponent
    }
};