// https://leetcode.com/problems/number-of-boomerangs/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfBoomerangs(vector<vector<int>> &points)
    {
        int out = 0;
        for (int i = 0; i < points.size(); i++)
        {
            unordered_map<int, int> map;
            for (int j = 0; j < points.size(); j++)
            {
                int xdist = points[i][0] - points[j][0];
                int ydist = points[i][1] - points[j][1];
                out += (map[(xdist * xdist + ydist * ydist)]++) * 2;
            }
        }
        return out;
    }
};