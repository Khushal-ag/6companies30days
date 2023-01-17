// https://leetcode.com/problems/k-th-smallest-in-lexicographical-order/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findKthNumber(int n, int k, int start = 0)
    {
        if (k > 0)
        {
            for (int i = (start == 0) ? 1 : 0; i <= 9; i++)
            { 
                int count = numbersBeginWith(n, 10 * start + i);
                if (k <= count)
                    return findKthNumber(n, k - 1, 10 * start + i);
                k -= count;
            }
        }
        return start;
    }

    int numbersBeginWith(int n, long long prefix)
    {
        long long fac = 1;
        int count = 0;
        for (int digit = 1; digit <= 9; digit++)
        {
            long long min = prefix * fac;
            long long max = prefix * fac + fac - 1;
            if (n < min)
                break;
            else if (min <= n && n <= max)
            {
                count += (n - min + 1);
                break;
            }
            else
                count += fac;
            fac *= 10;
        }
        return count;
    }
};