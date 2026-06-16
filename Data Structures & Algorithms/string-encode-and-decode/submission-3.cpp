class Solution {
public:

    string encode(vector<string>& strs) {
        string enc="";
        for(auto &i:strs){
            enc+=i;
            enc+="b_";
        }
        return enc;
    }

    vector<string> decode(string s) {
        string cur="";
        vector<string> ans;
        for(int i=0;i<s.size();i++){
            if(i<s.size()-1 && s[i]=='b' && s[i+1]=='_'){
                i++;
                ans.push_back(cur);
                cur="";
            }
            else cur+=s[i];
        }
        return ans;
    }
};
