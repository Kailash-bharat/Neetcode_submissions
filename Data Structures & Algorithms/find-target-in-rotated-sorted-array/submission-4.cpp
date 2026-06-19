class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1;
        if(n>0 && nums[0]==target) return 0;

        while(l<r){
            int mid = l + (r-l)/2;
            if(nums[mid]>nums[r]){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }

        int pivot=l;

        if (target >= nums[pivot] && target <= nums[n - 1]) {
            l = pivot;
            r = n - 1;
        } else {
            l = 0;
            r = pivot - 1;
        }

        while (l <= r) {
            int mid = l+(r-l)/2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) l = mid+1;
            else r = mid-1;
        }

        return -1;
    }
};
