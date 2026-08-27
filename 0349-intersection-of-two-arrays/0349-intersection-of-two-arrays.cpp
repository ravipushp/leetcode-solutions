class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> freq1;
        for(int i=0;i<nums1.size();i++){
            freq1[nums1[i]]++;
        }
        unordered_map<int, int> freq2;
        for(int j=0;j<nums2.size();j++){
            freq2[nums2[j]]++;
        }
        vector<int> ans;
        for(auto it : freq1){
            ans.push_back(it.first);
        }
        for(auto it : freq2){
            ans.push_back(it.first);
        }
        unordered_map<int,int> result;
        for(int i=0;i<ans.size();i++){
            result[ans[i]]++;
        }
        vector<int> ravi;
        for(auto ct:result){
            if(ct.second>=2){
                ravi.push_back(ct.first);
            }
        }

        return ravi;
    }
};