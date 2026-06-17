class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0) return 0;
        int ans=1;
        int left=0,right=0;
        vector<int> v(128,0);

        for(;right<n;right++){
            v[s[right]]++;
            while(v[s[right]]>1){
                v[s[left]]--;
                left++;
            }
            ans=max(ans,right-left+1);
        }

        return ans;
    }
};
