class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> prepro(n,1);
        vector<int> postpro(n,1);
        vector<int> ans;

        for(int i=1;i<n;i++){
            // if(i==1) prepro[i]=nums[i-1];
            // else prepro[i]=prepro[i-1]*nums[i-1];
            prepro[i]=prepro[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            // if(i==n-2) postpro[i]=nums[i+1];
            // else postpro[i]=postpro[i+1]*nums[i+1];
            postpro[i]=postpro[i+1]*nums[i+1];
        }

        // for(int i=0;i<n;i++){
        //     cout << prepro[i] << " ";
        // }
        // cout << endl;
        // for(int i=0;i<n;i++){
        //     cout << postpro[i] << " ";
        // }

        for(int i=0;i<n;i++){
            ans.push_back(prepro[i]*postpro[i]);
        }

        return ans;
    }
};
