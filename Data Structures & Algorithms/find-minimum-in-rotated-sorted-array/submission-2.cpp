class Solution {
public:
    int findMin(vector<int> &nums) {
        int comp=nums[0];
        int n=nums.size();
        int s=0,e=n-1;
        while(s<e){
            int mid = s+(e-s)/2;
            if(nums[mid]>=comp) s=mid+1;
            else e=mid;
        }
        if(s>=n) return comp;
        else if(s==n-1 && nums[s]>comp) return comp; 
        else return nums[s];
    }
};
