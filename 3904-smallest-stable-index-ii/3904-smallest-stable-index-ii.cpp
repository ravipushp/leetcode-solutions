// class Solution {
// public:
//     int firstStableIndex(vector<int>& nums, int k) {
//         if(nums.size()==1){
//             return 0;
//         }
//         for(int i=0;i<nums.size();i++){
//             int maximum=INT_MIN;
//             int minimum=INT_MAX;
//             for(int j=0;j<=i;j++){
//                 maximum=max(maximum,nums[j]);
//             }
//             for(int j=i;j<nums.size();j++){
//                 minimum=min(minimum,nums[j]);
//             }
//             if((maximum-minimum)<=k){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxSoFar = -1;
        int cand = 0, cMax = 0;

        for (int i = 0; i < nums.size(); i++) {
            maxSoFar = max(maxSoFar, nums[i]);

            if (i == cand) cMax = maxSoFar;

            if (nums[i] < cMax - k)
                cand = i + 1;
        }

        return cand < nums.size() ? cand : -1;
    }
};