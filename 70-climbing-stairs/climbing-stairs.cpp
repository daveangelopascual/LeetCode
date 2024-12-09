class Solution {
public:
    int climbStairs(int n) {
        if (n == 1)
            return 1;
        else if (n == 2)
            return 2;
         int last = 2, beforeLast = 1, current;
        for ( int i = 3; i <= n; i++) {
            current = last + beforeLast;
            beforeLast = last;
            last = current;
        }
        return current;
        
    }
};