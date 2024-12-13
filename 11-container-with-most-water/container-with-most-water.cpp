class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0, lWall = 0, rWall = height.size()-1;
        
        while (lWall < rWall) { //calcuates the area given by the position and dimension of the walls
            area = max(area, (rWall-lWall) * (min(height[lWall], height[rWall]))); 
            
            if (height[lWall] < height[rWall]) //moves the smaller wall inward, to "potentially" get a taller wall
                lWall++;
            else
                rWall--;
        }
        return area;
    }
};