class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>> mp;
        for(auto &str:strs){
            map<char,int> cur;
            for(auto &ch:str) cur[ch]++;
            mp[cur].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto &vec:mp){
            ans.push_back(vec.second);
        }
        return ans;
    }
};
