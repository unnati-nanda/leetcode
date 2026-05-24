class Solution {
public:
    vector<int> dp;

    int dfs(int i, vector<int>& arr, int d) {
        if (dp[i] != -1)
            return dp[i];

        int n = arr.size();
        int ans = 1;

        // Move right
        for (int x = 1; x <= d && i + x < n; x++) {
            int j = i + x;

            // Stop if higher or equal element appears
            if (arr[j] >= arr[i])
                break;

            ans = max(ans, 1 + dfs(j, arr, d));
        }

        // Move left
        for (int x = 1; x <= d && i - x >= 0; x++) {
            int j = i - x;

            // Stop if higher or equal element appears
            if (arr[j] >= arr[i])
                break;

            ans = max(ans, 1 + dfs(j, arr, d));
        }

        return dp[i] = ans;
    }

    int maxJumps(vector<int>& arr, int d) {
        int n = arr.size();

        dp.resize(n, -1);

        int result = 1;

        for (int i = 0; i < n; i++) {
            result = max(result, dfs(i, arr, d));
        }

        return result;
    }
};