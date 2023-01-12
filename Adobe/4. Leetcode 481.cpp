// https://leetcode.com/problems/magical-string/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int magicalString(int n)
    {
        string s = "122";
        int i = 2;
        while (s.length() < n)
            s.append(s[i++] - '0', s.back() ^ 3);
        return count(s.begin(), s.begin() + n, '1');
    }
};