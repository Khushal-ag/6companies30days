// https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        map<char, int> f;
        int l = 0, r = 0, cnt = 0;
        int n = s.size();
        while (r < n)
        {
            f[s[r]]++;
            while (f['a'] && f['b'] && f['c'])
            {
                cnt += n - r;
                f[s[l++]]--;
            }
            r++;
        }
        return cnt;
    }
};