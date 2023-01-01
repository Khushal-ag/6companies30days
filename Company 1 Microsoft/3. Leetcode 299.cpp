// https://leetcode.com/problems/bulls-and-cows/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string getHint(string secret, string guess)
    {
        int n = secret.size();
        int b = 0, c = 0;
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;
        for (int i = 0; i < n; i++)
        {
            if (secret[i] == guess[i])
                b++;
            else
            {
                mp1[secret[i] - '0']++;
                mp2[guess[i] - '0']++;
            }
        }
        for (auto it : mp1)
        {
            if (mp2.find(it.first) != mp2.end())
                c += min(mp2[it.first], it.second);
        }
        return to_string(b) + 'A' + to_string(c) + 'B';
    }
};