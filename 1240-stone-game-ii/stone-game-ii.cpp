class Solution {
    public:
        int dp [105][105];
            vector<int> suffix;
                int n;

                    int f(int idx, int M){
                            if(idx >= n) return 0;

                                    if(dp[idx][M] != -1) return dp[idx][M];

                                            int ans = 0;

                                                    for(int x = 1; x <= 2 * M; x++){
                                                                int opponent = f(idx + x, max(M, x));
                                                                            int current = suffix[idx] - opponent;

                                                                                        ans = max(ans, current);
                                                                                                }

                                                                                                        return dp[idx][M] = ans;
                                                                                                            }
                                                                                                                int stoneGameII(vector<int>& piles) {
                                                                                                                        n = piles.size();
                                                                                                                                suffix.resize(n+1, 0);

                                                                                                                                        for(int i = n-1; i >= 0; i--){
                                                                                                                                                    suffix[i] = suffix[i+1] + piles[i];
                                                                                                                                                            }

                                                                                                                                                                    memset(dp, -1, sizeof(dp));

                                                                                                                                                                            return f(0, 1);
                                                                                                                                                                                }
                                                                                                                                                                                };

