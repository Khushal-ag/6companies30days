// https://leetcode.com/problems/number-of-pairs-satisfying-inequality/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long int count;

    void checkCount(vector<int> &nums, int start, int mid, int end, int d)
    {

        int l = start, r = mid + 1;
        while (l <= mid && r <= end)
        {
            if (nums[l] <= (nums[r] + d))
            {
                count += (end - r + 1);
                l++;
            }
            else
            {
                r++;
            }
        }
        sort(nums.begin() + start, nums.begin() + end + 1);
        return;
    }
    void mergeSort(vector<int> &nums, int start, int end, int d)
    {
        if (start == end)
            return;

        int mid = (start + end) / 2;
        mergeSort(nums, start, mid, d);
        mergeSort(nums, mid + 1, end, d);

        checkCount(nums, start, mid, end, d);
        return;
    }
    long long numberOfPairs(vector<int> &a, vector<int> &b, int d)
    {
        count = 0;
        int n = a.size();
        vector<int> c(n);

        for (int i = 0; i < n; i++)
            c[i] = a[i] - b[i];

        mergeSort(c, 0, n - 1, d);

        return count;
    }
};