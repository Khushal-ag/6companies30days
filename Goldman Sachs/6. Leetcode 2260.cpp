// https://leetcode.com/problems/minimum-consecutive-cards-to-pick-up/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumCardPickup(vector<int> &cards)
    {
        unordered_map<int, int> m;
        int s = 0, index = -1;
        for (int i = 0; i < cards.size(); i++)
        {
            m[cards[i]]++;
            if (m[cards[i]] == 2)
            {
                index = i + 1;
                break;
            }
        }
        return index;
    }
};