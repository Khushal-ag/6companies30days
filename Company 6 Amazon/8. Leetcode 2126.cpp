// https://leetcode.com/problems/destroying-asteroids/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool asteroidsDestroyed(int mass, vector<int> &ass)
    {
        long long m = mass;
        sort(ass.begin(), ass.end());
        for (auto i : ass)
        {
            if (i <= m)
                m += i;
            else
                return false;
        }
        return true;
    }
};