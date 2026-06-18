class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        int n=temperatures.size();
        vector<int> ans(n,0);

        for(int i=0;i<n;i++){
            while(!st.empty() && st.top().first<temperatures[i]){
                int j=st.top().second;
                ans[j]=i-j;
                st.pop();
            }
            st.push({temperatures[i],i});
        }

        return ans;
    }
};
