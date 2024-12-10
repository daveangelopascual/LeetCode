class Solution {
public:
    int mySqrt(int x) {
        long unsigned int i = 0;
        while ((i+1)*(i+1) <= x)
            ++i;
        return i;
    }
};