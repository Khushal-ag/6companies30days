// https://leetcode.com/problems/maximum-length-of-repeated-subarray/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> dp;
    int ans = 0;
    int findLength(vector<int> &A, vector<int> &B)
    {
        dp.resize(A.size(), vector<int>(B.size(), -1));
        solve(A, B, 0, 0);
        return ans;
    }
    int solve(vector<int> &A, vector<int> &B, int i, int j)
    {
        if (i >= A.size() || j >= B.size())
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        solve(A, B, i + 1, j), solve(A, B, i, j + 1);
        dp[i][j] = A[i] == B[j] ? solve(A, B, i + 1, j + 1) + 1 : 0;
        ans = max(ans, dp[i][j]);
        return dp[i][j];
    }
};