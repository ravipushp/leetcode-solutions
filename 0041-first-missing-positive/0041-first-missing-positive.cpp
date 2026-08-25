class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(int j=1;j<INT_MAX;j++){
            if(st.find(j) == st.end()){
            return j;
            }
        }
        return 0;
    }
};