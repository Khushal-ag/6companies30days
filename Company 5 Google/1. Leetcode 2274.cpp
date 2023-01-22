// https://leetcode.com/problems/maximum-consecutive-floors-without-special-floors/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxConsecutive(int bottom, int top, vector<int> &s)
    {
        int ans = 0;
        sort(s.begin(), s.end());
        for (int i = 1; i < s.size(); i++)
            ans = max(ans, s[i] - s[i - 1] - 1);
        ans = max(ans, s[0] - bottom);
        ans = max(ans, top - s[s.size() - 1]);
        return ans;
    }
};