// https://leetcode.com/problems/airplane-seat-assignment-probability/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double nthPersonGetsNthSeat(int n)
    {
        if (n > 1)
            return 0.5;
        return 1.0;
    }
};