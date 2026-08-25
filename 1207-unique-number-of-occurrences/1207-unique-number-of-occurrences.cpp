class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums) {
        int n =nums.size();
        unordered_map<int,int>freq;
        for(int c:nums){
            freq[c]++;
        }
        vector<int>ans;
    for(auto it : freq){
        ans.push_back(it.second);
    }
    sort(ans.begin(),ans.end());
    int count=0;
    for(int i=1;i<ans.size();i++){
        if(ans[i]==ans[i-1]){
            count++;
        }
    }
        return count==0 ? true:false;
    }
};