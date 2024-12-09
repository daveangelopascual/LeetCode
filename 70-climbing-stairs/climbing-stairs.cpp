class Solution {
public:
    int climbStairs(int n) {
        if (n == 1)
            return 1;
        else if (n == 2)
            return 2;

        // 3 steps is the sum of 1 & 2 step combos
        // 4 steps is the sum of 2 & 3 step combos
        // 5 steps is the sum of 3 & 4 step combos
        // etc...

        int last = 2, beforeLast = 1, current;
        for ( int i = 3; i <= n; i++) { 
            current = last + beforeLast; 
            beforeLast = last; 
            last = current;
        }
        return current;
        
    }
};