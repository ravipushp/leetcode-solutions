class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int> prefix(nums.size());
        prefix[0] = nums[0];
        for(int i = 1; i < nums.size(); i++){
            prefix[i] = prefix[i - 1] + nums[i];
        }
        int total = prefix[nums.size() - 1];
        for(int i = 0; i < nums.size(); i++){
            int left = 0;
            if(i > 0){
                left = prefix[i - 1];
            }
            int right = total - left - nums[i];
            if(left == right){
                return i;
            }
        }
        return -1;
    }
};