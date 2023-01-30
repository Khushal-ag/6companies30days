// https://leetcode.com/problems/most-popular-video-creator/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> mostPopularCreator(vector<string> &crt, vector<string> &ids, vector<int> &vws)
    {
        unordered_map<string, long> tot;
        unordered_map<string, vector<pair<long, string>>> vid;

        long m = 0;
        for (int i = 0; i < crt.size(); ++i)
        {
            tot[crt[i]] += vws[i];
            m = max(m, tot[crt[i]]);
            vid[crt[i]].emplace_back(-vws[i], ids[i]);
        }

        vector<vector<string>> result;
        for (auto &[c, vv] : vid)
        {
            if (tot[c] != m)
                continue;
            result.push_back({c,
                              min_element(vv.begin(), vv.end())->second});
        }

        return result;
    }
};