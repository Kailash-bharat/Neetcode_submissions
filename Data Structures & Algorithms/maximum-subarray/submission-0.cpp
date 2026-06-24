class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0], sum=0;
        for(int &num:nums){
            if(ans<num) ans=num;
        }
        int temp=ans;
        for(int &num:nums){
            sum+=num;
            ans=max(ans,sum);
            if(sum<0) sum=0;
        }

        if(ans==0 && temp<ans) ans=temp;
        return ans;
    }
};
