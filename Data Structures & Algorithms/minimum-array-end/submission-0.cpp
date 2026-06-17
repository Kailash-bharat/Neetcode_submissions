class Solution {
public:
    long long minEnd(int n, int x) {
        long long ans = x;
        int temp = n - 1;

        for (int pos = 0; temp > 0; pos++) {
            if ((ans & (1LL << pos)) == 0) {
                if (temp & 1) {
                    ans |= (1LL << pos);
                }
                temp >>= 1;
            }
        }
        return ans;
    }
};