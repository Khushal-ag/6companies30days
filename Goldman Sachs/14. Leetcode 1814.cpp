// https://leetcode.com/problems/count-nice-pairs-in-an-array/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countNicePairs(vector<int> &a)
    {
        int res = 0, mod = 1e9 + 7;
        unordered_map<int, int> count;
        for (auto i : a)
        {
            int n = count[i - rev(i)]++;
            res += n;
            res %= mod;
        }
        return res;
    }
    int rev(int a)
    {
        int b = 0;
        while (a > 0)
        {
            b = b * 10 + (a % 10);
            a /= 10;
        }
        return b;
    }
};