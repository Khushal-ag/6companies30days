// https://leetcode.com/problems/shortest-unsorted-continuous-subarray/description/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findUnsortedSubarray(vector<int> &nums)
    {
        vector<int> sorted(nums);
        sort(sorted.begin(), sorted.end());
        int n = nums.size(), i = 0, j = n - 1;
        while (i < n && nums[i] == sorted[i])
        {
            i++;
        }
        while (j > i && nums[j] == sorted[j])
        {
            j--;
        }
        return j + 1 - i;
    }
};