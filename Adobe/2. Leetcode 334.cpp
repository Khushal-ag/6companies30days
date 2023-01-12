// https://leetcode.com/problems/increasing-triplet-subsequence/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 3)
            return false;
        int m = INT_MAX, sm = INT_MAX;
        for (int i : nums)
        {
            if (i > m)
            {
                return true;
            }
            else if (i > sm && i < m)
            {
                m = i;
            }
            else if (i < sm)
            {
                sm = i;
            }
        }
        return false;
    }
};