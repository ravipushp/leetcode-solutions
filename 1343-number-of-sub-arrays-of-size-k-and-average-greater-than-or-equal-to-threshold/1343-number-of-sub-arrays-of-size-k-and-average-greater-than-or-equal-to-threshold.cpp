class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left=0;
        int right=k-1;
        int sum=0;
        int count=0;
        int avg=0;
        for(int i=left;i<=right;i++){
            sum=sum+arr[i];
        }
        avg=sum/k;
        if(avg>=threshold){
            count++;
        }
        while(right<arr.size()-1){
            sum=sum-arr[left];
            left++;
            right++;
            sum=sum+arr[right]; 
            avg=sum/k;
            if(avg>=threshold){
                count=count+1;
            }
        }
        return count;
    }
};