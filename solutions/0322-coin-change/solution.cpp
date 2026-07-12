class Solution {
public:
    vector<int> dp;

    int solve(vector<int>& coins, int target) {
        if (target == 0)
            return 0;

        if (target < 0)
            return -1;

        if (dp[target] != -2)
            return dp[target];

        int ans = 1e9;

        for (int coin : coins) {
            int curr = solve(coins, target - coin);

            if (curr != -1) {
                ans = min(ans, curr + 1);
            }
        }

        if (ans == 1e9)
            return dp[target] = -1;

        return dp[target] = ans;
    }

    int coinChange(vector<int>& coins, int amount) {
        dp.assign(amount + 1, -2);
        return solve(coins, amount);
    }
};
