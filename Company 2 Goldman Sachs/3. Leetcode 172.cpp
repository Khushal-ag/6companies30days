// https://leetcode.com/problems/factorial-trailing-zeroes/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trailingZeroes(int n)
    {
        int ans = 0;
        while (n / 5 > 0)
        {
            n /= 5;
            ans += n;
        }
        return ans;
    }
};