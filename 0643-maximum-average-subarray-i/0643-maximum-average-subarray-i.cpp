class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left=0;
        int right=k-1;
        double sum=0;
        for(int i=left;i<=right;i++){
            sum=sum+nums[i];
        }
        double maxavg=sum/k;
        while(right<nums.size()-1){
            sum=sum-nums[left];
            left++;
            right++;
            sum=sum+nums[right];
            double avg=sum/k;
            if(avg>maxavg){
                maxavg=avg;
            }
        }
        return maxavg;
    }
};