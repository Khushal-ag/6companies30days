// https: // leetcode.com/problems/evaluate-reverse-polish-notation/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> s;
        unordered_map<string, function<int(int, int)>> ops{
            {"+", plus<int>()},
            {"-", minus<int>()},
            {"*", multiplies<int>()},
            {"/", divides<int>()},
        };

        for (auto token : tokens)
        {
            auto it = ops.find(token);
            if (it != ops.end())
            {
                auto o2 = s.top();
                s.pop();
                auto o1 = s.top();
                s.pop();
                s.push(it->second(o1, o2));
            }
            else
            {
                s.push(stoi(token));
            }
        }

        return s.top();
    }
};