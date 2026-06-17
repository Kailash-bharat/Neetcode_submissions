class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int left = 0;
        int highfreq = 0;
        unordered_map<char,int> mp;
        int ans = 0;

        for(int right = 0; right < n; right++) {
            char ch = s[right];
            mp[ch]++;
            highfreq = max(highfreq, mp[ch]);

            while((right - left + 1) - highfreq > k) {
                mp[s[left]]--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};
