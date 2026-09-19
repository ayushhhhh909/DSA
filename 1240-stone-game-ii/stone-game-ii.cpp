class Solution {
    public:
        int solve(vector<int>& piles, int i, int M, vector<vector<int>>& dp) {
                int n = piles.size();

                        if(i >= n)
                                    return 0;

                                            if(dp[i][M] != -1)
                                                        return dp[i][M];

                                                                int stones = 0;
                                                                        int result = 0;

                                                                                for(int x = 1; x <= min(2 * M, n - i); x++) {

                                                                                            stones += piles[i + x - 1];

                                                                                                        int total = stones + 
                                                                                                                        (accumulate(piles.begin() + i + x, piles.end(), 0)
                                                                                                                                        - solve(piles, i + x, max(M, x), dp));

                                                                                                                                                    result = max(result, total);
                                                                                                                                                            }

                                                                                                                                                                    return dp[i][M] = result;
                                                                                                                                                                        }

                                                                                                                                                                            int stoneGameII(vector<int>& piles) {
                                                                                                                                                                                    int n = piles.size();

                                                                                                                                                                                            vector<vector<int>> dp(n, vector<int>(n + 1, -1));

                                                                                                                                                                                                    return solve(piles, 0, 1, dp);
                                                                                                                                                                                                        }
                                                                                                                                                                                                        };

