class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int sum=0;
        int minlen=nums.size()+1;
        for(int right=0;right<=nums.size()-1;right++){
            sum=sum+nums[right];
            while(sum>=target){
                int currentlen=right-left+1;
                if(currentlen<minlen){
                    minlen=currentlen;
                }
                sum=sum-nums[left];
                left++;
            }
        }
        if (minlen == nums.size() + 1){
            return 0;
        }
        return minlen;
    }
};