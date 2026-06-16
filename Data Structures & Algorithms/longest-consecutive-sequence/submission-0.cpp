class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        map<int,int> mp;
        for(auto &i:nums) mp[i]++;
        int cur=1;
        int ans=1;
        for(auto& [val,freq]:mp){
            if(mp[val-1]>0){
                cur++;
                ans=max(ans,cur);
            }
            else cur=1;
        }
        return ans;
    }
};
