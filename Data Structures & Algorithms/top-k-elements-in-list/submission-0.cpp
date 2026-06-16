class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(auto &i:nums){
            mp[i]++;
        }
        vector<vector<int>> v;
        for(auto &[val,freq]:mp){
            v.push_back({freq,val});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i][1]);
        }
        return ans;
    }
};
