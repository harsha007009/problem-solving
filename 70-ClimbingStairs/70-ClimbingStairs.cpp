// Last updated: 4/6/2025, 7:03:21 PM
class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n + 2, 0);
        dp[0] = 1;

        for (int i = 0; i <= n-1; i++) {
            dp[i + 1] += dp[i];
            dp[i + 2] += dp[i];
        }

        return dp[n];
    }
};
