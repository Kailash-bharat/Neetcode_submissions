class Solution {
public:

    void solve(set<vector<int>> &ans, vector<int> &nums, int target, vector<int> &cur){
        int n=nums.size();
        if(target==0){
            vector<int> temp=cur;
            sort(temp.begin(),temp.end());
            ans.insert(temp);
        }
        for(auto& i:nums){
            if(i>target) break;
            else{
                cur.push_back(i);
                solve(ans, nums, target-i, cur);
                cur.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int n=nums.size();
        set<vector<int>> ans;
        vector<int> cur;
        sort(nums.begin(),nums.end());
        solve(ans, nums, target, cur);
        vector<vector<int>> result;
        for(auto &vec:ans){
            result.push_back(vec);
        }
        return result;
    }
};
