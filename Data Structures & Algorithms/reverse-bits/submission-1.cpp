class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t mul=1<<31;
        uint32_t ans=0;
        while(n!=0){
            if(n&1){
                ans+=mul;
            }
            n=n>>1;
            mul=mul>>1;
        }
        return ans;
    }
};
