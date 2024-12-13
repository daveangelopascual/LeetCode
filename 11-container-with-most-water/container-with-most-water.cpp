class Solution {
public:
    int maxArea(vector<int>& height) {
        int width, minHeight, area = 0, lWall = 0, rWall = height.size()-1;
        
        while (lWall < rWall) {
            width = rWall-lWall;
            minHeight = min(height[lWall], height[rWall]);
            area = max(area, width*minHeight);
            
            if (height[lWall] < height[rWall])
                lWall++;
            else
                rWall--;
        }
        return area;
    }
};