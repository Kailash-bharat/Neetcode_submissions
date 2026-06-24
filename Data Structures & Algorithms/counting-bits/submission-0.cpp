class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        ans.push_back(0);

        for(int i=1;i<=n;i++){
            int cnt=0;
            int temp=i;
            while(temp!=0){
                cnt+=temp&1;
                temp=temp>>1;
            }
            ans.push_back(cnt);
        }

        return ans;
    }
};
