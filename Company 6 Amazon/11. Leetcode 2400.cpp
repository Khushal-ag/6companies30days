// https://leetcode.com/problems/number-of-ways-to-reach-a-position-after-exactly-k-steps/
#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001] = {}, mod = 1000000007;
class Solution
{
public:
    int numberOfWays(int startPos, int endPos, int k)
    {
        if (dp[1][1] == 0)
            for (int k = 1; k <= 1000; ++k)
            {
                dp[k][k] = 1;
                for (int i = 0; i < k; ++i)
                    dp[k][i] = (dp[k - 1][abs(i - 1)] + dp[k - 1][i + 1]) % mod;
            }
        return dp[k][abs(startPos - endPos)];
    }
};