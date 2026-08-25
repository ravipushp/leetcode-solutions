class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int multiple=k;
        while(st.count(multiple)){
            multiple=multiple+k;
        }
        return multiple;
    }
};