class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int nearest=n-1;

        for(int i=n-2;i>=0;i--){
            if(nums[i]>=nearest-i){
                nearest=i;
            }
        }
        
        return (nearest==0 ? true:false);
    }
};
