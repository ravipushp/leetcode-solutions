class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int current_area=0;
        int max_area=0;
        while(left<right){
            int length=min(height[left],height[right]);
            int bredth=right-left;
            current_area=length*bredth;
            max_area=max(max_area,current_area);
            if(height[left]>height[right]){

                right--;
            }else{
                left++;
            }
        }
        return max_area;
    }
};