// https://leetcode.com/problems/shuffle-an-array/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    vector<int> nums;

public:
    Solution(vector<int> nums)
    {
        this->nums = nums;
    }

    vector<int> reset()
    {
        return nums;
    }

    vector<int> shuffle()
    {
        vector<int> result(nums);
        for (int i = 0; i < result.size(); i++)
        {
            int pos = rand() % (result.size() - i);
            swap(result[i + pos], result[i]);
        }
        return result;
    }
};
