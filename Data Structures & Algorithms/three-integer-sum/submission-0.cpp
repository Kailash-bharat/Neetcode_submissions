class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        vector<int> cur;
                        cur.push_back(nums[i]);
                        cur.push_back(nums[j]);
                        cur.push_back(nums[k]);
                        sort(cur.begin(),cur.end());
                        ans.insert(cur);
                    }
                }
            }
        }
        vector<vector<int>> vans;
        for(auto &i:ans){
            vans.push_back(i);
        }
        return vans;
    }
};
