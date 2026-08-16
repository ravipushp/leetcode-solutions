class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int area=0;
        int right=height.size()-1;
        while(left<right){
            int min_height=min(height[left],height[right]);
            int weidth=right-left;
            area=max(area, min_height*weidth);
            if (height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return area;
    }
};